#include<stdio.h>
#include<math.h>
int a,b,c,d,e,i;
int panduan()
{
    e=1;
    for(c=2; c<=sqrt(a); c++)
    {
        if(a%c==0)
        {
            e=0;
            break;
        }
    }
    return (e);
}
int main()
{
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        i=0;
        if(a<=2)
        {
            printf("2\n");
            a=3;
            i++;
        }
        for(; a<=b; a++)
        {
            panduan();
            if(e==1)
            {
                printf("%d\n",a);
                i++;
            }
        }
        if(i==0)
            printf("\n");
        printf("\n");
    }
    return 0;
}

