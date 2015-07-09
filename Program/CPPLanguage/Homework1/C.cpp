#include <iostream>
#include <cstdio>
#define MAX_SIZE 10010
using namespace std;
struct date
{
    int month,day,year;
};
void swapsort(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int get_date_array(struct date d[])
{
    int i=0;
    while(scanf("%d/%d/%d", &d[i].month, &d[i].day, &d[i].year)!=EOF)
    {
        i++;
    }
    return i;
}
int sort_date_array(struct date d[], int n)
{
    int i,j,temp;
    //进行年份排序
    for(i=1; i<n-1; i++)
        for(j=0; j<n-i; j++)
            if(d[j].year>d[j+1].year)
            {
                swapsort(&d[j].year,&d[j+1].year);
                swapsort(&d[j].day,&d[j+1].day);
                swapsort(&d[j].month,&d[j+1].month);
            }
    //进行月份排序
    for(i=1; i<n-1; i++)
        for(j=0; j<n-i; j++)
            if(d[j].month>d[j+1].month&&d[j].year==d[j+1].year)
            {
                swapsort(&d[j].day,&d[j+1].day);
                swapsort(&d[j].month,&d[j+1].month);
            }
    //进行日期排序
    for(i=1; i<n-1; i++)
        for(j=0; j<n-i; j++)
            if(d[j].day>d[j+1].day&&d[j].month==d[j+1].month&&d[j].year==d[j+1].year)
            {
                swapsort(&d[j].day,&d[j+1].day);
            }
    return 0;
}
int main()
{
    struct date d_arr[MAX_SIZE];
    int cases = 0, i, j;

    cases = get_date_array(d_arr);
    sort_date_array(d_arr, cases);

    for(i = 0; i < cases; i++)
        printf("%02d/%02d/%d\n", d_arr[i].month, d_arr[i].day, d_arr[i].year);
    return 0;
}
