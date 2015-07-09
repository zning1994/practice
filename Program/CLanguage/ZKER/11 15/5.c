#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[80];
    int i,data,base;
    gets(str);
    scanf("%d",&base);
    i=0;
    data=0;
    while (str[i]!='\0')
    {
        if (str[i]>='0' && str[i]<=base-1+'0')
            data=data*base+str[i]-'0';
        else if (base>10 && str[i]>='a' && str[i]<='a'+base-11)
            data=data*base+str[i]-'a'+10;
        i++;
    }
    printf("%d",data);
    return 0;
}
