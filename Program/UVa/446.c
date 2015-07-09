#include<stdio.h>
int main()
{
    int N,a,b;
    char s;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d%c%d",&a,&s,&b);
        if(s=='+')
        {
            printf("%d + %d = ",a,b,a+b)
        }
    }
    return 0;
}
