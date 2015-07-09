#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    while(scanf("%d",&j)!=EOF)
    {
        c=0;
        for (i=0; i<n; i++)
        {
            if(j==a[i])
              {
                  printf("%d\n",i+1);
                  c++;
                  break;
              }
        }
        if(c==0)
            printf("NOT FOUND\n");
    }
}
