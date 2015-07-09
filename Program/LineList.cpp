#include <iostream>
#include <cstdio>
using namespace std;
typedef struct LNode{ //单链表结点结构定义
     char     data;      //数据域
     struct LNode * next;//指针域
}LNode;
typedef struct LNode* LinkList;
LNode node1,node2;   LinkList La,Lb;

Status ListCreate_L(LinkList &L)
{
//创建带头结点的单链表L
//开辟成功返回TRUE,L带回头结点地址，失败返回ERROR
    LNode  *r,*q;  //r指向尾结点,q指向新开辟结点
    int n;
    printf(“请输入元素个数:”);
    scanf(“%d”,&n);
    if(n<0)return ERROR;
    L=(LNode*)malloc(sizeof(LNode));//开辟头结点
    if(L==NULL)exit(-1);
    (*L).next=NULL;//(*L).next为L所指结点的next成员,换用L->next
    r=L;
    for(int i=1; i<=n; ++i)
    {
        q=(LNode*)malloc(sizeof(LNode));
        if(!q)exit(-1);
        InputElem(q->data );//实现?
        q->next=NULL;
        r->next=q;
        r=q;  //或用r=r->next
    }
}//新结点指针值不赋空会如何？
void ListPrint_L(LinkList L)
{
//输出带头结点的链表L各数据元素的值
    LNode *curPtr;
    if(!L || !L->next)    printf(“空表!”);
    curPtr=L->next;
    while(curPtr!=NULL)
    {
        OutputElem(curPtr->data) );
        curPtr=curPtr->next;   //++curPtr不对
    }
}
void ListDelete_L(LinkList L, int i, ElemType &e)
{
//功能及返回值说明,注意带头结点
//思路：首先定位到第i-1个结点，若发现不存在第i个节点则返回错误，否则，用e带回第i个节点数据值，从链表中删除第i个节点
    ……

}

int main()
{

    return 0;
}
