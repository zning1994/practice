#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d",&a))
    {
        if(a==0)
            break;
        else
        {
            switch(a%10)
            {
            case 1:
                printf("%dst\n",a);
                break;
            case 2:
                printf("%dnd\n",a);
                break;
            case 3:
                printf("%drd\n",a);
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                printf("%dth\n",a);
                break;
            default:
                printf("%dth\n",a);
                break;
            }
        }
    }
    return 0;
}
