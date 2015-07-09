#include<stdio.h>
int digits(int n)
{
    int i;
    for(i=0;;i++)
    {
        n/=10;
        if(n==0)
            break;
    }
    return i+1;

}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
