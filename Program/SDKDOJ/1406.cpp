#include<stdio.h>
int main()
{
    int sum = 0;
    int sun = 0;
    int a;
    int n;
    int i = 0;
    while(scanf("%d%d", &a,&n)!=EOF)
    {
        if(a==0&&n==0)break;
        else
        {
            while (i<n)
            {
                sum = a + sum * 10;
                sun += sum;
                ++i;
            }
            printf("%d\n", sun);
            sum = 0, sun = 0, i = 0;
        }
    }
    return 0;
}
