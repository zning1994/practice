#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    if (n == 2) return 1;
    if ((n&1) == 0) return 0;
    int i, q = (int)sqrt(n);
    for (i=3; i<=q; i+=2)
        if (n%i == 0) return 0;
    return 1;
}
int main()
{
//    freopen("in3.txt","r",stdin);
//freopen("out3.txt","w",stdout);
    int n, i;
    scanf("%d", &n);
    for (i=2; i<n; i++)
        if (isPrime(i) && isPrime(n-i) && i<=n-i)
//            break;
            printf("%d + %d = %d\n", i, n-i , n);
    return 0;
}
