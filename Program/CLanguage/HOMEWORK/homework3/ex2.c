#include<stdio.h>
#include<stdlib.h>
int main()
{
        //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b;
    char c;
    while(scanf("%d%c%d",&a,&c,&b))
    {
        if(a==0&&b==0&&c==' ')
            break;
        else
        {
            switch(c)
            {
            case '+':
                printf("%d\n",a+b);
                break;
            case '-':
                printf("%d\n",a-b);
                break;
            case '*':
                printf("%d\n",a*b);
                break;
            case '/':
                printf("%d\n",a/b);
                break;
            case '%':
                printf("%d\n",a%b);
                break;
            default:
                printf("invalid op\n");
            }
        }

    }
    return 0;
}
