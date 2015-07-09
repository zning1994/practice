#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {if (a<0||a>100)
       printf("Error\n");
    else
        switch(a/10)
        {
         case 10:
         case 9:printf("Excellent\n");break;
         case 8:printf("Good\n");break;
         case 7:printf ("Average\n");break;
         case 6:printf("Pass\n");break;
         default:printf("Failing\n");break;
        }
    }
    return 0;
}
