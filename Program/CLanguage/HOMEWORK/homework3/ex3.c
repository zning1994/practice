//此程序由ZNing编写，版权所有，违者必究 ©
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,i,j,k;
    scanf("%d%d",&m,&n);
    printf("=====\n");
    for(i=n; i>=m; i--)
    {
        for(j=2; j<i; j++)
            if(i%j==0)
                break;
        if(j>=i&&i!=1&&i!=0)
            printf("%d\n",i);
    }
    printf("=====\n");
    return 0;
}

