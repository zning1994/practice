#include <iostream>
#include <stack>
#define MAXN 20010
using namespace std;
typedef struct _tnode
{
    int info;
    struct _tnode *lmchild;
    struct _tnode *rsibling;
} tnode;
stack<tnode *> rootstack;
tnode *build_bin_tree(char inputseq[], tnode *root, int *max_stack_sz)
{
    char *p=inputseq;
    int val=1;
    tnode *father, *temp, *current;
    while( *p != '\0' )
    {
        if (*p == 'd')	//一个新的结点
        {
            temp=new tnode;
            temp->info=(val++);
            temp->lmchild=NULL;
            temp->rsibling=NULL;
            father=rootstack.top();
            //temp现在是father的儿子，那么，它是father的left-most-child(lmc)呢，还是lmc的right sibling呢？
            if(father->lmchild == NULL)	//是father的lmc
            {
                father->lmchild=temp;
            }
            else	//是lmc的right sibling
            {
                current=father->lmchild;
                while (current->rsibling != NULL)	current=current->rsibling;
                current->rsibling=temp;
            }
            rootstack.push(temp);

            if(rootstack.size() > (*max_stack_sz))	(*max_stack_sz)=rootstack.size();	//记录栈的最大尺寸
        }
        else
        {
            rootstack.pop();
        }
        ++p;
    }
    return root;
}
int bin_tree_layer(tnode *root)	//递归计算转换后二叉树的层数
{
    int left_h, right_h;
    if(root==NULL) return 0;
    else
    {
        left_h = 1 + bin_tree_layer(root->lmchild);
        right_h = 1 + bin_tree_layer(root->rsibling);
        if (left_h > right_h)	return left_h;
        else return right_h;
    }
}
void delete_bin_tree(tnode *root)
{
    if (root != NULL)
    {
        delete_bin_tree(root->lmchild);
        delete_bin_tree(root->rsibling);
        delete root;
        root=NULL;
    }
}
int main()
{
    tnode *root;
    int max_stack_sz, bt_layers, serial=0;
    char inputseq[MAXN];
    while (1)
    {
        cin.getline(inputseq, MAXN, '\n');
        if(inputseq[0] == '#') break;
        //初始化
        ++serial;
        root=new tnode;
        root->info=0;
        root->lmchild=NULL;
        root->rsibling=NULL;
        while(!rootstack.empty())
            rootstack.pop();
        rootstack.push(root);
        max_stack_sz=1;
        //处理
        root = build_bin_tree(inputseq, root, &max_stack_sz);
        bt_layers = bin_tree_layer(root);
        cout<<"Tree "<<serial<<": "<<(max_stack_sz-1)<<" => "<<(bt_layers-1)<<endl;
        //收尾工作
        delete_bin_tree(root);
    }
    return 0;
}
