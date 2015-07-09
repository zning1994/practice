#include<stdio.h>
int main()
{
    int a,b,i=0;
    printf("Please enter a number£º");
    scanf("%d",&a);
    b=a;
    if(a==0)
        printf("The number 0 has 1 seat(s).\n");
    else
    {
        while(a!=0)
        {

            if(a==0)
                break;
            else
            {
                a/=10;
                i++;
            }
        }
        printf("The number %d has %d seat(s).\n",b,i);
    }
    return 0;
}
