//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//char s[1000000];
//int main()
//{
//    int i,j,len,count=0;
//    while(gets(s)!=NULL)
//    {
//        getchar();
//        len=strlen(s);
//        for(i=0; s[i]!='\0'; i++)
//            if((s[i]==' ')&&((s[i+1]>='A'&&s[i+1]<='Z')||(s[i+1]>='a'&&s[i+1]<='z')))
//                count++;
//        printf("%d\n",count+1);
//        count=0;
//        memset(s,0,sizeof(s));
//    }
//    return 0;
//}
#include <stdio.h>
int main()
{
    char c;
    int flag = 1, count = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if (flag)
            {
                count++;
                flag = 0;
            }
        }
        else if (c == '\n')
        {
            printf("%d\n", count);
            count = 0;
            flag = 1;
        }
        else
            flag = 1;
    }
    return 0;
}
