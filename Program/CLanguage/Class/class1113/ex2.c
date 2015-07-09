#include<stdio.h>
#include<string.h>//Using strlrn strcpy strcat strcmp
#define N 200000
int main()
{
    char str[N];
    int a,i,j,k,m,true=0;
    scanf("%s",str);
    a=strlen(str);
//    if(a%2==0)
//    {
    for(m=0; m<=a/2; m++)
//    {
//        str1[i]=str[i];
//        printf("%s\n",str);
//    }
//    for(j=a,k=0; j>=(a+1)/2; j--,k++)
//    {
//        str2[k]=str[j];
//        //printf("%s",str2[k]);
//    }
//    for(m=0; m<=a/2; i++)
//    {
        if(str[m]!=str[a-m-1])
        {
            printf("No");
            true=1;
            break;
        }

    if(true==0)
        printf("Yes");
//    }
//    else if(a%2!=0)
//    {
//        for(i=0; i<=a/2; i++)
//            str1[i]=str[i];
//        for(j=a,k=0; j>a/2; j--,k++)
//            str2[k]=str[j];
//        for(m=0; m<=a/2; i++)
//        {
//            if(str1[m]!=str2[m])
//            {
//                printf("No");
//                true=1;
//                break;
//            }
//        }
//        if(true==0)
//            printf("Yes");
//    }
    return 0;
}
