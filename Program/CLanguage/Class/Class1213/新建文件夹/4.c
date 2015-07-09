#include<stdio.h>
typedef struct
{
    char name[100];
    int score[3];
    int sum;
} student;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int i,j;
    double total=0;
    student peoples[10];
    for(i=0; i<10; i++)
    {
        gets(peoples[i].name);
        peoples[i].sum=0;
        for (j=0;j<3;j++)
        {
            scanf("%d",&peoples[i].score[j]);
            peoples[i].sum+=peoples[i].score[j];
        }
        total+=peoples[i].sum;
    }
    total/=10;
    for(i=0; i<10; i++)
    {
        if(peoples[i].sum>total)
            puts(peoples[i].name);
    }
    return 0;
}
