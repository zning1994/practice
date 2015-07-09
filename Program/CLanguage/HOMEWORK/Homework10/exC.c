#include<stdio.h>
int main()
{
    int N,year,month,day;
    char bk,junk;
    scanf("%d %c",&N,&bk);//input first line.
    while(N>0)
    {
        scanf("%d%c%d%c%d",&year,&junk,&month,&junk,&day);//input second line
        if(year/1000==1||year/1000==2)
            printf("%d%c%.2d%c%.2d\n",year,bk,month,bk,day);
        else
        {
            if(year<13)
                printf("%d%c%.2d%c%.2d\n",2000+year,bk,month,bk,day);
            else if(year>12)
                printf("%d%c%.2d%c%.2d\n",1900+year,bk,month,bk,day);
        }
        N--;
    }
    return 0;
}
