//此源碼由ZNing編寫，想知道張寧是誰，請登錄www.zning.net.cn
#include<stdio.h>
int main()
{
    int N,i=0,n=0,c,d,s=0;
    scanf("%d",&N);
    int a[N],b[N];
    for(i=0; i<=N-1; i++)
        scanf("%d",&a[i]);
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        for (i=0; i<N; i++)
        {
            if(a[i]==n) b[c]=i+1,c++;
        }
        if(c!=0)
        {
            d=0;
            printf("%d",b[d]);
            for (d=1; d<c; d++)
                printf(" %d",b[d]);
        }
        else
            printf("NOT FOUND");
        printf("\n");
    }
    return 0;
}
