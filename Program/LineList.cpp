#include <iostream>
#include <cstdio>
using namespace std;
typedef struct LNode{ //��������ṹ����
     char     data;      //������
     struct LNode * next;//ָ����
}LNode;
typedef struct LNode* LinkList;
LNode node1,node2;   LinkList La,Lb;

Status ListCreate_L(LinkList &L)
{
//������ͷ���ĵ�����L
//���ٳɹ�����TRUE,L����ͷ����ַ��ʧ�ܷ���ERROR
    LNode  *r,*q;  //rָ��β���,qָ���¿��ٽ��
    int n;
    printf(��������Ԫ�ظ���:��);
    scanf(��%d��,&n);
    if(n<0)return ERROR;
    L=(LNode*)malloc(sizeof(LNode));//����ͷ���
    if(L==NULL)exit(-1);
    (*L).next=NULL;//(*L).nextΪL��ָ����next��Ա,����L->next
    r=L;
    for(int i=1; i<=n; ++i)
    {
        q=(LNode*)malloc(sizeof(LNode));
        if(!q)exit(-1);
        InputElem(q->data );//ʵ��?
        q->next=NULL;
        r->next=q;
        r=q;  //����r=r->next
    }
}//�½��ָ��ֵ�����ջ���Σ�
void ListPrint_L(LinkList L)
{
//�����ͷ��������L������Ԫ�ص�ֵ
    LNode *curPtr;
    if(!L || !L->next)    printf(���ձ�!��);
    curPtr=L->next;
    while(curPtr!=NULL)
    {
        OutputElem(curPtr->data) );
        curPtr=curPtr->next;   //++curPtr����
    }
}
void ListDelete_L(LinkList L, int i, ElemType &e)
{
//���ܼ�����ֵ˵��,ע���ͷ���
//˼·�����ȶ�λ����i-1����㣬�����ֲ����ڵ�i���ڵ��򷵻ش��󣬷�����e���ص�i���ڵ�����ֵ����������ɾ����i���ڵ�
    ����

}

int main()
{

    return 0;
}
