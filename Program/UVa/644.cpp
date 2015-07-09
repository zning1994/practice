#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char str[100][100];
int com(int t,int x)
{
    int n,m,i;
    n=strlen(str[t]);
    m=strlen(str[x]);
    n=(n>m)?m:n;
    for(i=0;i<n;i++)
    {
        if(str[t][i]!=str[x][i])
        return 1;
    }
    return 0;
}
int main()
{
    int t,leap,i;
    t=0;
    leap=0;
	int cas=0;
    while(gets(str[t])!=NULL)
    {

        if(str[t][0]=='9')
        {
			cas++;

            if(leap)
                printf("Set %d is not immediately decodable\n",cas);
            else
                printf("Set %d is immediately decodable\n",cas);
            t=0;
            leap=0;
            continue;
        }
        for(i=0;i<t;i++)
        {
            if(com(t,i)==0)
            {
                leap=1;
            }
        }
        t++;
    }
    return 0;
}
