#include<stdio.h>
int jos(int n,int k)
{
    int x;
    if(n==1)x=1;
    else
    {
        x=(jos(n-1,k)+k)%n;
        if(x==0)x=n;
    }
    return x;
}
int main()
{
    int n,k,s;
    while(scanf("%d%d",&n,&k)!=EOF){
    s=jos(n,k);
    printf("%d\n",s);}
    return 0;
}
