//回文数（非数组使用）
#include<stdio.h>
int main()
{
    int a,b,i=0,nor=0,sum=0;
    scanf("%d",&a);
    nor=a;
    while(a>0)
        //在计算sum+=b之前，将原数扩大10倍使其进位，即可将数据倒序组合成新的数sum。
        //【这是关键，在课堂上未想出来，记得复习！】
        //这样做的好处就是，我们不需要先统计用户输入的数的位数，而直接操作它。
        //同时，少运用数组，减少内存占用。
        sum=sum*10,b=a%10,sum=sum+b,a=a/10;
    if(sum==nor)
        printf("Yes");
    else
        printf("No");
    return 0;
}
