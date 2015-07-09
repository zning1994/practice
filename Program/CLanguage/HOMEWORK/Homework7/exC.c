#include<stdio.h>
int main()
{
    int d[12]= {31,0,31,30,31,30,31,31,30,31,30,31};
    int n,a,b,c,i,j;
    scanf("%d",&n);
    while(n>0)
    {
        int sum=0,x=0;
        scanf("%d-%d-%d",&a,&b,&c);
        if((a%4==0&&a%100!=0)||a%400==0)
        {
            d[1]=29;
            if(b==2&&c>=30)
                printf("error date!\n");
            else if((b==1||b==3||b==5||b==7||b==8||b==10||b==12)&&c>=32)
                printf("error date!\n");
            else if((b==4||b==6||b==9||b==11)&&c>=31)
                printf("error date!\n");
            else
            {
                for(i=0; i<b-1; i++)
                {
                    sum+=d[i];
                }
                printf("%d\n",sum+c);
            }
        }
        else
        {
            d[1]=28;
            if(b==2&&c>=29)
                printf("error date!\n");
            else if((b==1||b==3||b==5||b==7||b==8||b==10||b==12)&&c>=32)
                printf("error date!\n");
            else if((b==4||b==6||b==9||b==11)&&c>=31)
                printf("error date!\n");
            else
            {
                for(j=0; j<b-1; j++)
                {
                    x+=d[j];
                }
                printf("%d\n",x+c);
            }
        }
        n--;
    }
    return 0;
}
