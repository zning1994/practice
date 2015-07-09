/*包括初始化栈,判断栈是否为空,出栈,入栈,检查栈顶元素,输出栈内元素*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024
typedef struct data
{
    char data[MAX];
    int top;
}SEQSTACK;
SEQSTACK *init_seqstack(void)                                                     /*初始化栈*/
{
    SEQSTACK *head;
    head=(SEQSTACK *)malloc(sizeof(SEQSTACK));
    if(!head)
        return NULL;
    else
    {
        head->top=-1;
        return head;
    }
}
int empty_seqstack(SEQSTACK *head)                                      /*判断栈是否为空*/
{
    if(head->top==-1)
        return 0;
    else
        return 1;
}
int push_seqstack(SEQSTACK *head,char *num)                         /*入栈*/
{
    if(head->top==MAX-1)
        return 1;
    else
    {
        head->top++;
        head->data[head->top]=*num;
        return 0;
    }
}
int pop_seqstack(SEQSTACK *head,char *num)                       /*出栈*/
{
    if(!empty_seqstack(head))
        return 1;
    else
    {
        *num=head->data[head->top];
        head->top--;
        return 0;
    }
}
int top_seqstack(SEQSTACK *head)                                   /*栈顶元素*/
{
    if(!empty_seqstack(head))
        return 0;
    else
        return head->data[head->top];
}
int print_seqstack(SEQSTACK *head)                               /*输出栈内元素*/
{
    if(!empty_seqstack(head))
        return 1;
    else
    {
        int i;
        printf("当前栈中的元素:");
        for(i=head->top;i>=0;i--)
            printf("%c",head->data[i]);
        printf("\n");
        return 0;
    }
}
char num[8000];
int main(void)
{
    SEQSTACK *head;
    int n,i;
    head=init_seqstack();
    scanf("%c",&num[0]);
    for(i=1;num[i]!='\0';i++)
    {
        scanf("%c",&num[i]);
        push_seqstack(head,num);
    }
    n=i;
    print_seqstack(head);
    printf("\n");
    return 0;
}
