#include<stdio.h>
int main()
{
    int n,i,r=0;
    char a[5];
    while(scanf("%d",&n)!=EOF)
    {
        while(n>0)
        {
            scanf("%s",a);
            getchar();
            if(a[1]=='+')
                r+=1;
            else if(a[1]=='-')
                r-=1;
            n--;
        }
        printf("%d\n",r);
        r=0;
    }
    return 0;
}
