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
	��ʵ�����ǿ�������������������ֱ�Ϊ200��9����������϶���201λ��
	�����������������Կ϶��ǿ�С�ˣ�����Ӧ�ÿ���201��û������
	��Ȼ���������������밡������������Ľ��û��ϵ�������ðɣ����ҿ���˵�㿼�ǵ�ÿ��string��
	�����и�'\0'ô������ʵ�ȽϿӣ�����������û���ǵĻ����������ʱ��������ǿɰ����������
	����Ȼ�����Ƕ�̬�ռ���Ǹ�overflow�ˡ���������
	���⣬�Ҹ��㿪��205�����ȵĿ��ǣ����������ʦ����ʱ��ռ临�ӶȺ�ռ����Ҫ����Ըĳ�201
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

