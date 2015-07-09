#include<stdio.h>
typedef struct info
{
    int data;
    struct info *next;
}INFO;
int main()
{
    INFO a,b,c;
    INFO *p,*q;
    p=&a;
    a.data=10;
    a.next=&b;
    b.data=20;
    b.next=&c;
    c.data=30;
    c.next=NULL;
    q=p;
    while(q)
    {
        printf("%d,",q->data);
        q=q->next;
    }
    return 0;
}
