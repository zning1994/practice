#include <stdio.h>
int main()
{
    int data,sum,judge1,judge2,judge3,i=1,j=1,k=1;
    scanf("%d",&data);
    data=data>0?data:-data;
    judge1=data%2;
    while (data>0)
    {
        k++;
        if (data%10%2==0)
            i++;
        else
            j++;
        sum+=data%10;
        data/=10;
    }
    judge3=sum%2;
    if(j==k&&judge3==1)
        printf("Odd");
    else if(i==k)
        printf("Even");
    else
        printf("None");
    return 0;
}
