#include <stdio.h>
#include <stdlib.h>
int prime(int m,int n)
{
    char *p;
    int i,j,k;
    if((p=(char *)malloc(n+1))==NULL)
    {
        printf("Application memory failure...\n");
        exit(0);
    }
    for(n++,i=2; i<n; p[i++]='a');
    for(k=0,i=2; i<n; i++)
    {
        if(p[i])
        {
            for(j=i+i; j<n; j+=i)
                if(!(j%i))
                {
                    p[j]=0;
                }
            if(i>=m) printf(++k%10 ? "%d\n" : "%d\n",i);
        }
    }
    if(k==0)
        printf("\n");
    free(p);
}
int main(void)
{
    freopen("inB.txt","r",stdin);
    freopen("outB.txt","w",stdout);
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        prime(m,n);
        printf("\n");
    }
    return 0;
}
