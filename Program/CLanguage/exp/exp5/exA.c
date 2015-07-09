#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,i=0;
    scanf("%d",&a);
    b=a;
    while(a!=1&&a!=2&&a!=3)
    {
        a/=10;
    }
    if(a==1)
        printf("The file in \"C:\\My Documents\\%d.txt\" is Tom's.",b);
    else if(a==2)
        printf("The file in \"C:\\My Documents\\%d.txt\" is Mary's.",b);
    else if(a==3)
        printf("The file in \"C:\\My Documents\\%d.txt\" is Jerry's.",b);
    return 0;
}
