/************************************************
���ⲻ�ѣ�������������ɨ�账��Ϳ����ˡ�����뵽ʹ�ñ����ڱ����Դ����ٴ����Ѷ�

˼·:˼·�ܼ򵥾��Ǵ�ͷ��βһ�α���һ������������ݣ�����'*'����һ����Ӧ�ı�ʾ��
���Ķ�ά����res������Χ8����������������Ӧ�ĵ�����ͳ�Ʋ���������ڱ���һ���ά��
��res�ѽ����Ҫ������Ϳ����ˡ�
************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int res[102][102];
char str[102][102];

int main()
{
    freopen("out.txt","w",stdout);
    int cases=0;
    int m,n;
    int i,j;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        if(m==0&&n==0)
        {
            break;
        }
        memset(res,0,sizeof(res));
        cases++;
        if(cases!=1)
        {
            printf("\n");
        }
        for(i=1;i<=m;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=1;i<=m;i++)
            for(j=0;j<n;j++)
            {
                if(str[i][j]=='*')
                {
                   res[i][j+1]=-99999;
                   res[i-1][j+1]+=1;
                   res[i+1][j+1]+=1;
                   res[i][j+2]+=1;
                   res[i][j]+=1;
                   res[i-1][j]+=1;
                   res[i-1][j+2]+=1;
                   res[i+1][j]+=1;
                   res[i+1][j+2]+=1;
                }
            }
        printf("Field #%d:\n",cases);
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%c",res[i][j]>=0?'0'+res[i][j]:'*');
            }
            printf("\n");
        }
    }
    return 0;
}

