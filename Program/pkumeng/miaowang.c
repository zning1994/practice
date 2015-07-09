#include<stdio.h>
int main()
{
    int n,m,k,i=0;
    printf("主人，请输入你要的动物序号（1、喵～2、汪～3、咯～4、哈～5、哼哧～）：");
    scanf("%d",&m);
    if(m==1)
    {
        printf("主人，请输入你要喵的行数：");
        scanf("%d",&n);
        k=0;
        if(n<=1000&&n>0)
        {
            while(n<=k)
            {
                for(i=1; i>0; i++)
                {
                    printf("* ");
                }
                printf("\n");
                k++;
            }
            printf("主人，我已经喵好了～\n");
        }
        else if(n==0)
            printf("主人，我喵不出来～\n");
        else if(n>1000)
            printf("您想累死喵么～\n");
        else
            printf("主人，这是啥～\n");
    }
    else if(m==2)
    {
        printf("主人，请输入你要汪的行数：");
        scanf("%d",&n);
        if(n<=1000&&n>0)
        {
            while(n!=0)
            {
                for(i=n; i>0; i--)
                {
                    printf("汪");
                }
                printf("\n");
                n--;
            }
            printf("主人，我已经汪好了～\n");
        }
        else if(n==0)
            printf("主人，我汪不出来～\n");
        else if(n>1000)
            printf("您想累死汪么～\n");
        else
            printf("主人，这是啥～\n");
    }
    else if(m==3)
    {
        printf("主人，请输入你要咯的行数：");
        scanf("%d",&n);
        if(n<=1000&&n>0)
        {
            while(n!=0)
            {
                for(i=n; i>0; i--)
                {
                    printf("咯");
                }
                printf("\n");
                n--;
            }
            printf("主人，我已经咯好了～\n");
        }
        else if(n==0)
            printf("主人，我咯不出来～\n");
        else if(n>1000)
            printf("您想累死咯么～\n");
        else
            printf("主人，这是啥～\n");
    }
    else if(m==4)
    {
        printf("主人，请输入你要哈的行数：");
        scanf("%d",&n);
        if(n<=1000&&n>0)
        {
            while(n!=0)
            {
                for(i=n; i>0; i--)
                {
                    printf("哈");
                }
                printf("\n");
                n--;
            }
            printf("主人，我已经哈好了～\n");
        }
        else if(n==0)
            printf("主人，我哈不出来～\n");
        else if(n>1000)
            printf("您想累死人么～\n");
        else
            printf("主人，这是啥～\n");
    }
    else if(m==5)
    {
        printf("主人，请输入你要哼哧的行数：");
        scanf("%d",&n);
        if(n<=1000&&n>0)
        {
            while(n!=0)
            {
                for(i=n; i>0; i--)
                {
                    printf("哼哧");
                }
                printf("\n");
                n--;
            }
            printf("主人，我已经哼哧好了～\n");
        }
        else if(n==0)
            printf("主人，我哼哧不出来～\n");
        else if(n>1000)
            printf("您想累死你么～\n");
        else
            printf("主人，这是啥～\n");
    }
    else
        printf("主人，你脑残了吗～～～\n");
    system("pause");
    return 0;
}
