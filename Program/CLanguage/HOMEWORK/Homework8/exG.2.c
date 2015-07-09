#include <stdio.h>
int main()
{
    int a[1000]= {0},b[1000]= {0};
    int m,i,j=0,p,k;
    while(scanf("%d",&m)!=EOF)
    {

        j=j+1;
        if(j%2!=0)
        {
            for(i=0; i<m; i=i+1)
                scanf("%d",&a[i]);
        }
        else
        {
            for(p=0; p<m; p=p+1)
                scanf("%d",&b[p]);
        }
        if(j%2!=1)
        {

            if(i<=p)
            {
                for(k=0; k<p; k=k+1)
                {
                    if(k==0)
                    {
                        printf("%d",a[k]+b[k]);
                        a[k]=0;
                        b[k]=0;
                    }
                    else
                    {
                        printf(" %d",a[k]+b[k]);
                        a[k]=0;
                        b[k]=0;
                    }

                }
                printf("\n");
            }
            else
            {
                for(k=0; k<i; k=k+1)
                {
                    if(k==0)
                    {
                        printf("%d",a[k]+b[k]);
                        a[k]=0;
                        b[k]=0;
                    }
                    else
                    {
                        printf(" %d",a[k]+b[k]);;
                        a[k]=0;
                        b[k]=0;
                    }

                }
                printf("\n");
            }
        }
    }
    if(m!=0&&j%2==1)
    {
        for(i=0; i<m; i=i+1)
        {
            if(i==0)
                printf("%d",a[i]);
            else
                printf(" %d",a[i]);
        }
        printf("\n");
    }
    if(m==0&&j%2==1)
        printf("\n");
}
