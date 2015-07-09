#include<stdio.h>
#include<string.h>
#define N 100000
int main()
{
    char str[N];
    int a=0,e=0,i=0,o=0,u=0,j=0,k;
    gets(str);
    k=strlen(str);
    while(j<k)
    {
        if(str[j]=='a'||str[j]=='A')
        {
            a++;
            j++;
        }
        else if(str[j]=='e'||str[j]=='E')
        {
            e++;
            j++;
        }
        else if(str[j]=='i'||str[j]=='I')
        {
            i++;
            j++;
        }
        else if(str[j]=='o'||str[j]=='O')
        {
            o++;
            j++;
        }
        else if(str[j]=='u'||str[j]=='U')
        {
            u++;
            j++;
        }
        else
            j++;
    }
    printf("A(a):%d E(e):%d I(i):%d O(o):%d U(u):%d\n",a,e,i,o,u);
    return 0;
}
