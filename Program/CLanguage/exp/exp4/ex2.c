#include<stdio.h>
#define P 1e-10
int main()
{
    double x,y,a,b,c;
    int i,j,k;
    scanf("(%lf, %lf)",&x,&y);
    if(x>P&&y>P)
        printf("(%.1lf, %.1lf) is in quadrand I\n",x,y);
    else if(x>P&&y<-P)
        printf("(%.1lf, %.1lf) is in quadrand IV\n",x,y);
    else if(x<-P&&y<-P)
        printf("(%.1lf, %.1lf) is in quadrand III\n",x,y);
    else if(x<-P&&y>P)
        printf("(%.1lf, %.1lf) is in quadrand II\n",x,y);
    else if(x>-P&&x<P&&y<-P||y>P)
        printf("(%.1lf, %.1lf) is on the y axis\n",x,y);
    else if(y>-P&&y<P&&x<-P||x>P)
        printf("(%.1lf, %.1lf) is on the x axis\n",x,y);
    else if(x>-P&&x<P&&y>-P&&y<P)
        printf("(%.1lf, %.1lf) is origin\n",x,y);
    return 0;
}
