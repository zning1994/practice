/***** 约瑟夫问题 *****/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
#define FALSE 0
#define TRUE 1
typedef struct SeqList
{
    int n,Maxnum;
    int* element;
}* PSeqList;

int deletep(PSeqList list,int h);
void yuese_seq(PSeqList yue,int m);
PSeqList createNullList_seq(int q);
int insertpre_seq(PSeqList list,int p,int x);

int main()
{
    void yuese_seq(PSeqList yue,int m);
    PSeqList createNullList_seq(int q);
    int insertpre_seq(PSeqList list,int p,int x);
    int deletep(PSeqList list,int h);
    PSeqList yuese;
    int n,m,i=0;
    //printf("请输入人数n(<1000):");
    scanf("%d",&n);
    //printf("请输入每次杀掉的人序号m:");
    scanf("%d",&m);
    yuese=createNullList_seq(n);
    if(yuese!=NULL)
    {
        while(i<n)
        {
            insertpre_seq(yuese,i,i+1);
            i++;
        }
        yuese_seq(yuese,m);
        free(yuese->element);
        free(yuese);
    }
    return 0;
}
int deletep(PSeqList list,int h)
{
    int q;
    if(h<0||h>list->n-1)
    {
        printf("not exist\n");
        return 0;
    }
    for(q=h; q<list->n-1; q++)
        list->element[q]=list->element[q+1];
    list->n=list->n-1;
    return 1;
}
void yuese_seq(PSeqList yue,int m)
{
    int k=0,N;
    for(N=yue->n; N>0; N--)
    {
        k=(k+m-1)%N;
        deletep(yue,k);
    }
    printf("%d\n",yue->element[0]);
}

PSeqList createNullList_seq(int q)
{
    PSeqList list=(PSeqList)malloc(sizeof(struct SeqList));
    if(list!=NULL)
    {
        list->element=(int*)malloc(sizeof(int)*q);
        if(list->element)
        {
            list->Maxnum=q;
            list->n=0;
            return list;
        }
        else free(list);
    }
    printf("out of space\n");
    return NULL;
}

int insertpre_seq(PSeqList list,int p,int x)
{
    int q;
    if(list->n>=list->Maxnum)
    {
        printf("overflow\n");
        return 0;
    }
    if(p<0||p>list->n)
    {
        printf("not exist\n");
        return 0;
    }
    for(q=list->n-1; q>=p; q--)
        list->element[q+1]=list->element[q];
    list->element[p]=x;
    list->n=list->n+1;
    return 1;
}

