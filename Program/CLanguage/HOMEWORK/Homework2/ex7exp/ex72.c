#include <stdio.h>
int main()
{
    int a,b,c,cou;
    scanf("%d %d %d",&a,&b,&c);
    if (b>=c)
        {
            printf("%d",c);
            cou=c;
        }

    else
        {
            printf("%d",b);
            cou=b;
        }
        cou++;
    while (cou<=a)
    {
        if((cou%b==0||cou%c==0)&&!(cou%b==0&&cou%c==0))
            printf(" %d",cou);
         cou++;
    }
    return 0;
}
