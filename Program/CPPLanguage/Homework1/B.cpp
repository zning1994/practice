#include<iostream>
#include<cstdio>
using namespace std;
int printGraphic(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
        putchar('*');
    printf("\n");
    for(i=1; i<=n/2; i++)
    {
        for(j=1; j<=n/2-i+1; j++)
            putchar('*');
        for(j=1; j<=2*i-1; j++)
            printf(" ");
        for(j=1; j<=n/2-i+1; j++)
            putchar('*');
        printf("\n");
    }
    for(i=n/2-1; i>=1; i--)
    {
        for(j=1; j<=n/2-i+1; j++)
            putchar('*');
        for(j=1; j<=2*i-1; j++)
            printf(" ");
        for(j=1; j<=n/2-i+1; j++)
            putchar('*');
        printf("\n");
    }
    for(i=1; i<=n; i++)
        putchar('*');
    printf("\n");
}
int main()
{
    int num;
    cin >> num;
    printGraphic(num);
    return 0;
}
