#include<stdio.h>
int main()
{
    double a,b,i,s;
    char w,x,y,z;
    scanf("%c%c%c%c",&w,&x,&y,&z);
    scanf("%lf %lf %lf",&a,&b,&s);
    if(w=='C')
    {
        printf("   C  ->    F\n");
        for(i=a;i<=b+0.01;i+=s)
            printf("%5.1lf -> %5.1lf\n",i,(9*i/5+32));
    }
    if(w=='F')
    {
        printf("   F  ->    C\n");
        for(i=a;i<=b+0.01;i+=s)
            printf("%5.1lf -> %5.1lf\n",i,((i-32)*5/9));
    }
}
