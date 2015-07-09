#include<stdio.h>
#include<string.h>
int main()
{
    char ss[15];
    int k,a;
    scanf("%s",ss);

    getchar();
    scanf("%d",&k);
    a=strlen(ss);
    if(k>a)
        printf("error\n");
    else
        printf("%c\n",ss[k-1]);
    return 0;
}
