#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b;
    double i,sum,j;
    while(scanf("%d%d",&a,&b))
    {
        if(a==0&b==0)
            break;
        else
        {
                sum=(5950-a*b)/(100-b);
//                sum=(59.5-(a*j))/(1.0-j);
        }
        if(sum>100.0)
            printf("God blesses me next time\n");
        else
            printf("%.0lf\n",sum);
    }
    return 0;
}
