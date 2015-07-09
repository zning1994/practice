#include<iostream>
#include<cstdio>
using namespace std;
int printGraphic(int n, char c)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            putchar(' ');
        for(j=1; j<=2*i-1; j++)
            putchar(c);
        printf("\n");
    }
    printf("\n");
}
int main()
{
    char c;
    int num;
    cin >> num >> c;
    printGraphic(num, c);
    return 0;
}
