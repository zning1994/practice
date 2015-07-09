#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,i=0,j=0,n,sum=0,ave,b=0,c=0;
    scanf("%d",&t);
    while(t>=1)
    {
        i=0,j=0,sum=0,b=0,c=0;
        scanf("%d",&n);
        int num[n],num1[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
            sum+=num[i];
        }
        ave=sum/n;
        if(sum%n==0)
        {
            for(i=0; i<n; i++)
            {
                if(ave==num[i])
                    b++,num1[j]=i,j++;
            }
        }
        else
        {
            printf("0\n");
            c=1;
        }
        if(b==0&&c!=1)
            printf("0\n");
        else if(b!=0&&c!=1)
        {
            printf("%d\n",b);
            for(i=0; i<j; i++)
            {
                printf("%d",num1[i]+1);
                if(i<j-1)
                    printf(" ");
            }
            printf("\n");
        }
//        memset(num,0,sizeof(num));
//        memset(num1,0,sizeof(num1));
        t--;
    }
}
