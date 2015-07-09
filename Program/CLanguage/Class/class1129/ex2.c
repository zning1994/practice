//预处理命令之条件编译
//1、在OJ上进行简易调试~~（freopen）
//2、防止头文件重定义
//3、可移植性要好（类似于HTML进行检测浏览器版本的HTML标记）
#include<stdio.h>
#define DEBUG 1

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freoepn("out.txt","w",stdout);
#endif // ONLINE_JUDGE
    int a[10],max,i;
    for(i=0; i<10; i++)
        scanf("%d",&a[i]);
#if DEBUG==1
    for(i=0; i<10; i++)
        printf("%5d",a[i]);
    putchar('\n');
#endif
    max=a[0];
    for(i=1; i<10; i++)
        if(max<a[i])
            max=a[i];
    printf("%d",max);
    return 0;
}
