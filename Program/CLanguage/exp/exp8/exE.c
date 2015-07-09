#include<stdio.h>
int myFloor(double data)
{
    if(data-(int)data==0) return data;
    if(data>0) return ((int)data);
    else return ((int)data)-1;
}
int myCeil(double data)
{
    if(data-(int)data==0) return data;
    if(data>0) return ((int)data+1);
    else return ((int)data);
}
int main()
{
    double data;
    while(scanf("%lf", &data) != EOF)
        printf("%d %d\n", myFloor(data), myCeil(data));
    return 0;
}
