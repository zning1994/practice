/************************************************
�����ַ�����ϸ�����⻹�Ǵ�C��������C++��stringд�˰��죬д���ˣ����ڸĳ�C���ˡ�
ע��Ҫ�ѱ�����ĸ�ַ���Χ�Ĵ���ĸ�����������Ȼ����бȽϡ�����⣬�������Ƚ�С�����Բ���trieʲô����~~
************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
char key[25][25];
char exc[25][100];
int cnt[25];
int k,e;
int keycnt(char *str)
{
    int i,j=0,number=0;
    char s[100];
    for(i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
        {
            s[j]=tolower(str[i]);
            j++;
        }
        else
        {
            s[j]='\0';
            for(j=0;j<k;j++)
            {
                if(strcmp(s,key[j])==0)
                    number++;
            }
            j=0;
        }
    }
    return number;
}
int main()
{
    int now=0;
    while(scanf("%d%d",&k,&e)==2)
    {
        getchar();
        memset(cnt,0,sizeof(cnt));
        int i,j,r;
        for(i=0;i<k;i++)
        {
            gets(key[i]);
        }
        for(i=0;i<e;i++)
        {
            gets(exc[i]);
        }
        for(i=0;i<e;i++)
        {
            cnt[i]=keycnt(exc[i]);
        }
        int max=0;
        for(i=0;i<e;i++)
            max=(max>cnt[i])?max:cnt[i];
        printf("Excuse Set #%d\n",++now);
        for(i=0;i<e;i++)
        {
            if(cnt[i]==max)
            {
                puts(exc[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
