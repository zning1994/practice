#include<stdio.h>
int main()
{
    int a,b,c,d,m,n,x,z;
    double y;
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    while(scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF)
    {
        int h=0,i=0;
        for(x=0; x<=m/a; x++)
        {
            y=((m*d-c*n)-(a*d-c)*x)*1.0/(b*d-c);
            z=((b*n-m)-(b-a)*x)*d/(b*d-c);
            if(a*x+b*y+c*z/d==m&&x+y+z==n&&h==0&&y>=0&&z>=0)
            {
                printf("COCKS,HENS,CHICKS\n");
                h=1;
            }
            if(a*x+b*y+c*z/d==m&&x+y+z==n&&y>=0&&z>=0)
            {
                printf("%d,%.0f,%d\n",x,y,z);
                i=i+1;
            }

            if(x==m/a&&i!=0)
                printf("\n");
        }
        if(i==0)
        {
            printf("Cannot buy!\n\n");
        }
    }
    return 0;
}
