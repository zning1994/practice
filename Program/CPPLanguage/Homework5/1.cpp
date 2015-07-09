#include<stdio.h>
const int MAXSIZE=26;
int anum[MAXSIZE]= {0},bnum[MAXSIZE]= {0};
int main()
{
    char ch;
    while((ch=getchar())!='\n')
        ++anum[ch-'A'];//记录字母出现频率
    while((ch=getchar())!='\n')
        ++bnum[ch-'A'];//记录字母出现频率
    int hash1=0,hash2=0;
    for(int i=0; i!=MAXSIZE; ++i)
    {
        hash1+=anum[i]*anum[i];//这里是重点，一定要是平方才行
        hash2+=bnum[i]*bnum[i];
    }
    if(hash1==hash2)
        printf("YES");
    else
        printf("NO");
    return 0;
}

