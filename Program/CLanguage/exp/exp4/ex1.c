#include<stdio.h>
int main()
{
    int h,m,s,a,b,c,i,j,k;
    while(scanf("%d:%d:%d",&h,&m,&s)!=EOF)
    {
        a=s+m*60+h*3600+1;
        printf("%d\n",a);
        a=0;
    }
    return 0;
}
