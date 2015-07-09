#include<stdio.h>
#define INT 1000000
int main()
{
    int n, xmin=INT, xmax=-INT, min=INT, max=-INT, x = 0;
    while ( scanf("%d", &n) != EOF)
    {
            if (n <= min)
                {
                    xmin = min;
                    min = n ;
                    //printf ("*");
                }
            if (n >= max)
                {
                    xmax = max;
                    max = n;
                }
            if (n < max && n >= xmax) xmax = n;
            if (n > min && n <= xmin) xmin = n;
            //printf ("*");
    }
    printf ("%d\n", xmax+max);
    //printf ("%d %d %d %d %d", n, max, min, xmax, xmin);
}
