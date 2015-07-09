#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct node
{
    char ch;
    struct node *next;
} *NODE, *LinkList;

char* str = (char *)malloc(sizeof(char));

LinkList CreateList(void)   // 创建有头结点，非循环链表
{
    LinkList head;
    NODE p;
    char c;
    head = p = (NODE)malloc(sizeof(node));
    for(int i=0; str[i]!='\0'; ++i)
    {
        p->next = (NODE)malloc(sizeof(node));
        if((str[i]>='A' && str[i] <='Z')||(str[i]>='a' && str[i] <='z'))
        {
            if(str[i]!='Z'&&str[i]!='z')
                p->next->ch = str[i]+1;
            else if(str[i]=='Z')
                p->next->ch = 'A';
            else if(str[i]=='z')
                p->next->ch = 'a';
        }
        else
            p->next->ch = str[i];
        p = p->next;
    }
    p->next = NULL;
    return head;
}

void ShowList(LinkList head)
{
    NODE p = head->next;
    for(; p; p = p->next) printf("%c",p->ch);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        gets(str);
        LinkList head = CreateList();
        ShowList(head);
    }
    return 0;
}
