#include<stdio.h>
#include<string.h>
int main()
{
    long long int i, a,j, index = 0;
    scanf("%lld",&a);
    long long int nums[a],numCount[a];
    memset(numCount,0,sizeof(numCount));
    for (i = 0; i < a; i++)
    {
        scanf("%lld", &nums[i]);
        for (j = 0; j < i; j++)
            if (nums[i] == nums[j])
                numCount[j]++;
    }
    for (i = 0; i < a-1 ; i++)
        if (numCount[i] < numCount[i+1])
            index = i+1;
    printf("Num: %d Numcount: %d\n", nums[index],numCount[index]);
}
