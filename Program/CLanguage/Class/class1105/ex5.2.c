//两数求最大公约数:辗转相除法
//由ZNing分析，痴呆一个
#include<stdio.h>
int main()
{
    int a,b,c,k;
    for(; scanf("%d%d",&b,&a)!=EOF;)
    {
        //check the two numbers == 0 or not.
        if(b==0)
        {
            printf("%d 0\n",a);
            continue;
        }
        if(a==0)
        {
            printf("%d 0\n",b);
            continue;
        }
        c=a*b;
        //Change the two numbers.Fellowing the smallest is first line.
        if(b<a)
            a=a+b,b=a-b,a=a-b;
        //这里，我们判断的意义是最小的那个数是不是凑巧就是最大的那个数的公因子。
        //如果不是的话我们将执行for，进入判断真正的公因子。
        //有则说明这两个数小的是最大公约数，这两个数大的那个是最小公倍数。
        k=b%a;
        //这是根据欧几里得的定义（辗转相除法）进行的计算。每次的取余使得b=a,a=k,
        //即最小的永远是a，最大的永远是b，如果说当k==0时，我们可以说当前所存在的a就是两个数的最大公约数。
        //而此时c/a所求的就是最小公倍数。
        for(; k!=0;)
            b=a,a=k,k=b%a;
        printf("%d %d\n",a,c/a);
    }
}
