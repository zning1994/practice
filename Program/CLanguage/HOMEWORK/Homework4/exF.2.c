#include<stdio.h>
int main()
{
    long long int a,i=10000;
    freopen("outF.txt","w",stdout);
    while(i<=700000)
    {

        printf("%lld ",i);
        a=i*i*i;
        printf("%lld\n",a);
        if(a%100==111)
        {
            printf("%lld\n",a);
            i++;
        }
        else
            i++;

//    }
//    for(i=1;i<=10000000;i++)
//    {
//        a=i*i*i;
//        if(a%100==111)
//            printf("%d\n",i);
////        else
////            continue;
    }
    return 0;
}
