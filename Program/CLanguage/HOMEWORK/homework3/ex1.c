#include<stdio.h>
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        switch(a/10)
        {
        case 9:
            printf("Excellent\n");
            break;
        case 8:
            printf("Good\n");
            break;
        case 7:
            printf("Average\n");
            break;
        case 6:
            printf("Pass\n");
            break;
        default:
            if(a==100)
                printf("Excellent\n");
            else if(a<0||a>100)
                printf("Error\n");
            else
                printf("Failing\n");

            }
    }
    return 0;
}
