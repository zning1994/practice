#include<stdio.h>
//#define ONLINE_JUDGE
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    char st,ed;
    int i;
    scanf("%c %c",&st,&ed);
    for(i=1; i<ed-st; i++)
        printf("%c",st+i);
    printf("\n***END***");
    return 0;
}
