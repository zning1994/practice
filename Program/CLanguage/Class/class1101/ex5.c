#include<stdio.h>
int main()
{
    int a,j;
    while(scanf("%d",&a)!=EOF)
    {
        for(j=2; j<a; j++)
            if(a%j==0)
                break;
        if(a!=0&&j>=a&&a!=1)
            printf("������\n");
        else
            printf("����������RSA�㷨�������㷨�������˴���������������^_^\n");
    }
    return 0;
}
