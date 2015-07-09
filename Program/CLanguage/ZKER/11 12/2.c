#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int a[4][4];
    int i,j,k,max,m,n;
    srand(time(NULL));
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
            a[i][j]=rand()%100;
    }

    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
            printf("%6d",a[i][j]);
        putchar('\n');
    }
    for(i=0; i<4; i++)
    {
        max=a[i][0];
        n=0;
        for(j=1; j<4; j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                n=j;
            }
        }
        printf("max:%d, row:%d, column:%d\n",max,i,n);
    }

    for(i=0; i<4; i++)
    {
        max=a[0][i];
        n=0;
        for(j=1; j<4; j++)
        {
            if(a[j][i]>max)
            {
                max=a[j][i];
                n=j;
            }
        }
        printf("max:%d, row:%d, column:%d\n",max,n,i);
    }

    max=a[0][0];
    n=0;
    for(i=1; i<4; i++)
    {
        if(a[i][i]>max)
        {
            max=a[i][i];
            n=i;
        }
    }
    printf("max:%d, row=column:%d\n",max,n);

    max=a[0][3];
    n=0;
    for(i=1; i<4; i++)
    {
        if(a[i][3-i]>max)
        {
            max=a[i][3-i];
            n=i;
        }
    }
    printf("max:%d, row:%d, column:%d\n",max,n,3-n);
}
