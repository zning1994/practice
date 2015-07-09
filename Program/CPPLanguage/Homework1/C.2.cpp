#include <iostream>
#include <cstdio>
#define MAX_SIZE 10010
using namespace std;
long long data[MAX_SIZE];
struct date
{
    int month,day,year;
};
void swapsort(long long *a,long long *b)
{
    long long temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int get_date_array(struct date d[])
{
    int i=0;
    while(cin>>d[i].month>>d[i].day>>d[i].year)
    {
        i++;
    }
    return i;
}
int sort_date_array(struct date d[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        data[i]=d[i].month*100+d[i].day+d[i].year*10000;
    for(i=1; i<n; i++)
        for(j=0; j<n-i; j++)
            if(data[j]>data[j+1])
                swapsort(&data[j],&data[j+1]);
    return 0;
}
int main()
{
    struct date d_arr[MAX_SIZE];
    int cases = 0, i, j;

    cases = get_date_array(d_arr);
    sort_date_array(d_arr, cases);

    for(i = 0; i < cases; i++)
    {
        printf("%02lld/%02lld/%lld\n", (data[i]%10000-data[i]%100)/100, data[i]%100, data[i]/10000);
    }

    return 0;
}
