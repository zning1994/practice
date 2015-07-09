#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define MAXNUM 200
struct SeqList
{
	int n;
    int *element;
};
typedef struct SeqList *PSeqList;
PSeqList createNullList_seq(int m)
{
	PSeqList palist=(PSeqList)malloc(sizeof(struct SeqList));
	if(palist!=NULL)
	{
		palist->element=(int*)malloc(sizeof(int)*m);
		if(palist->element)
		{
			palist->n=0;
			return palist;
		}
		else free(palist);
	}
	printf("Out of space!!\n");
	return NULL;
}
int insertPre_seq(PSeqList palist,int p,int x)
{
	int q;
	if(palist->n>MAXNUM)
	{
		printf("Over Flow!\n");
		return 0;
	}
	if(p<0||p>palist->n)
	{
		printf("Not exist!\n");
		return 0;
	}
	for(q=palist->n;q>=p;q--)
		palist->element[q+1]=palist->element[q];
	palist->n=palist->n+1;
	palist->element[p]=x;
	return 1;
}
int main()
{
    PSeqList palist,pblist,pclist;
	int l1,l2,l3;
	int i,k,j;
	/****
	其实，我们可以想象极限情况：两个分别为200个9的数相加最后肯定是201位，
	于是你这里的数组可以肯定是开小了，所以应该开到201就没问题了
	当然你会问这个可是输入啊！跟这个处理后的结果没关系啊……好吧，那我可以说你考虑到每个string后
	都会有个'\0'么……其实比较坑，这个玩意如果没考虑的话，出问题的时候会让我们可爱的数组溢出
	（当然，不是动态空间的那个overflow了…………）
	另外，我给你开到205是求稳的考虑，如果你们老师对于时间空间复杂度和占用有要求可以改成201
	*****/
	char a[205],b[205];
	gets(a);
	gets(b);
	l1=strlen(a);
	l2=strlen(b);
	int y=0,z=0;
	if(l1>l2)
		l3=l1+1;
	else
		l3=l2+1;
	palist=createNullList_seq(l3);
	pblist=createNullList_seq(l3);
	pclist=createNullList_seq(l3);
	if(palist!=NULL&&pblist!=NULL&&pclist!=NULL)
	{
		for(i=0;i<l1;i++)
		    insertPre_seq(palist,i,a[i]-48);
		for(k=0;k<l2;k++)
			insertPre_seq(pblist,k,b[k]-48);
		for(z=0;z<l3-l1;z++)
		    insertPre_seq(palist,0,0);
		for(y=0;y<l3-l2;y++)
		   insertPre_seq(pblist,0,0);
		int x=0;
		for(j=l3-1;j>=0;j--)
		{
			pclist->element[j]=palist->element[j]+pblist->element[j]+x;
			x=0;
		  	if(pclist->element[j]>=10)
			{
				pclist->element[j]=pclist->element[j]-10;
				x=1;
			}
		}
		int s;
		for(s=0;s<l3;s++)
		{
			if(pclist->element[s]!=0)
				break;
		}
		for(k=0;k<l3;k++)
			pclist->element[k]=pclist->element[k+s];
		pclist->n=l3-s;
		int m;
		for(m=0;m<pclist->n;m++)
			printf("%d",pclist->element[m]);
	}
	return 0;
}

