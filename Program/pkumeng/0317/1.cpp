#include <stdio.h>
#include <string.h>
int main()
{
    int n ;
    char a[81] ;
    scanf("%d" , &n) ;
    getchar();
    while(n--)
    {
        gets(a);
        int len = strlen(a) ;
        int i ;
        for(i=0 ; i<len  ; i++)
        {
            if(a[i]>='A' && a[i] <='Z') a[i] = (a[i]-64)%26 + 'A';
            if(a[i]>='a' && a[i] <='z') a[i] = (a[i]-96)%26 + 'a';
        }
        printf("%s\n" , a) ;
        memset(a,0,sizeof(a));
    }
    return 0 ;
}
