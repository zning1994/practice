#include<stdio.h>
#include<string.h>
#define P 21000
char str[P];
int len;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int i,j,k,l,n,N,sum;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        if(i!=1)
            printf("\n");
        scanf("%d%d",&n,&k);
        gets(str);
        for(j=1; j<=n; j++)
        {
            sum=0;
            memset(str,0,sizeof(str));
            gets(str);
            len=strlen(str);
            for(l=0; l<=len-1; l++)
            {
                if((str[l]>='A'&&str[l]<='Z')||(str[l]>='a'&&str[l]<='z'))
                {
                    if(str[l]>='a'&&str[l]<='z')
                        str[l]=str[l]-('a'-'A');
                    if(str[l]+k>'Z')
                        str[l]=str[l]+k-('Z'-'A')-1;
                    else if(str[l]+k<'A')
                        str[l]=str[l]+k+('Z'-'A')+1;
                    else
                        str[l]=str[l]+k;
                    sum++;
                }
            }
            printf("%d ",sum);
            for(l=0; l<=len-1; l++)
                if(str[l]>='A'&&str[l]<='Z')
                    printf("%c",str[l]);
            printf("\n");
        }
    }
    return 0;
}

