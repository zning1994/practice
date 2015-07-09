#include<stdio.h>
int main()
{
    int num[1100];
    int i,j,n,m,len,temp,trueall=0;
    scanf("%d%d",&n,&m);
    for(i=0; i<m; i++)
        scanf("%d",&num[i]);
    len=i;
    for(i=0; i<len-1; i++)
        for(j=0; j<len-i-1; j++)
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
    if(len%2!=0)len--;
    for(i=0; i<len; i+=2)
        if(num[i]%2!=0&&num[i+1]==num[i]+1)
            trueall=1;
        else if(num[i]%2==0&&num[i+1]==num[i]+1)
            trueall=1;
        else
        {
            trueall=0;
            break;
        }
    if(trueall==0)
        printf("NO\n");
    else if(trueall==1)
        printf("YES\n");
    return 0;
}
