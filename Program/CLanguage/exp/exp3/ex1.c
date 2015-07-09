////这是ZNing的源码，你猜ZNing是谁？
//#include<stdio.h>
//int main()
//{
//    int n,a,b,sum=0,x,y,t,result;
//    scanf("%d",&n);
//    scanf("%d",&a);
//    for(; n-1>=1; n--)
//    {
//        scanf("%d",&b);
//        if(sum<=a+b)
//        {
//            sum=a+b;
//            if(a>b)
//                x=b,y=a;
//            else
//                x=a,y=b;
//        }
//        a=b;
//    }
//    printf("%d + %d = %d",x,y,sum);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int m,n,a,b,N,i;
    scanf("%d%d%d",&N,&m,&n);
    i=3,b=n;
    for(i=3;i<=N;i++)
    {
        scanf("%d",&a);
        if((m+n)<(a+b))
        {
            m=b,n=a,b=a;
        }
        else
            b=a;
    }
    printf("%d + %d = %d",m,n,m+n);
    return 0;
}
