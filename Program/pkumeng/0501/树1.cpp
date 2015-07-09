#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000000
struct CSnode;
typedef struct CSnode *PCSnode;
struct CSnode
{
	int info;
	PCSnode lc;
	PCSnode rs;
};
typedef struct CSnode *CStree;
CStree createtree(void)
{
	CStree t=(CStree)malloc(sizeof(CStree));
	if(t!=NULL)
	{
		t->lc=(PCSnode)malloc(sizeof(PCSnode));
		t->rs=(PCSnode)malloc(sizeof(PCSnode));
		if(t->lc&&t->rs)
		{
			t->info=-1;
			return t;
		}
		else free(t);
	}
	printf("outofspace\n");
	return NULL;
}
struct seqstack
{
	int t;
	CStree *s;
};
typedef struct seqstack *Pseqstack;
Pseqstack createstack(int m)
{
	Pseqstack pastack=(Pseqstack)malloc(sizeof(Pseqstack));
	if(pastack!=NULL)
	{
		pastack->s=(CStree *)malloc(sizeof(CStree)*m);
		if(pastack->s)
		{
			pastack->t=0;
			return pastack;
		}
		else free(pastack);
	}
	printf("out of space\n");
	return NULL;
}
void push(Pseqstack pastack,CStree x)
{
	if(pastack->t>MAX-1)
		printf("overflow\n");
	else
	{
		pastack->t=pastack->t+1;
		pastack->s[pastack->t]=x;
	}
}
void pop(Pseqstack pastack)
{
	if(pastack->t==-1)
		printf("underflow\n");
	else
		pastack->t=pastack->t-1;
}
CStree top(Pseqstack pastack)
{
	if(pastack->t==-1)
		printf("empty\n");
	else
		return(pastack->s[pastack->t]);
}
int layer(CStree root)
{
    int left_h, right_h;
    if(root==NULL)
		return 0;
    else
    {
        left_h=1+layer(root->lc);
        right_h=1+layer(root->rs);
        if (left_h>right_h)
		    return left_h;
        else
			return right_h;
    }
}
int main()
{
	char a[11000];
	gets(a);
	int l;
	l=strlen(a);
	Pseqstack pastack=createstack(l);
	CStree t=createtree();
	CStree father=createtree();
	CStree current=createtree();
	int i;
	int j=0,len=0;
	int value=1;
	for(i=0;i<l;i++)
	{
		if(a[i]=='d')
		{
			j++;
            CStree temp=createtree();
            temp->info=++value;
            temp->lc=NULL;
            temp->rs=NULL;
			father=top(pastack);
			if(father->lc == NULL)
            {
                father->lc=temp;
            }
            else
            {
                current=father->lc;
                while (current->rs!= NULL)
				current=current->rs;
                current->rs=temp;
            }
			push(pastack,temp);
		}
		else if(a[i]=='u')
		{
			pop(pastack);
			j--;
		}
		if(len<j)
			len=j;
	}
	printf("%d=>%d",len,layer(t));
	return 0;
}
