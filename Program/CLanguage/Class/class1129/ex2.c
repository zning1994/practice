//Ԥ��������֮��������
//1����OJ�Ͻ��м��׵���~~��freopen��
//2����ֹͷ�ļ��ض���
//3������ֲ��Ҫ�ã�������HTML���м��������汾��HTML��ǣ�
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
