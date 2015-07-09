#include<stdio.h>
int main()
{
    long long int i,j,k,a,b,c,d,m,n,h,g;
    char o;
    char x[35];
    gets(x);
    while(scanf("%lld",&a)!=EOF)
    {
        scanf(",%lld,%lld%c%lld,%lld,%lld",&b,&c,&o,&d,&m,&n);
        h=0;
        g=1;
        i=0;
        for(j=0; j<(m-a*i)/b; j++)
        {

            k=m-i-j;
            if(a*i+b*j+k*c/d==m&&k*c%d==0)
            {
                g=2;
                h=h+1;
                if(h==1)
                    printf("COCKS,HENS,CHICKS\n");
                printf("%lld,%lld,%lld\n",i,j,k);
            }
            if(j==(m-a*i)/b-1)
            {
                i=i+1;
                j=-1;
                if(i==m/a)break;
            }

        }
        if(g==1)
            printf("Cannot buy!\n");
        printf("\n");
    }
    return 0;
}
