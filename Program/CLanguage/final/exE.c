#include<stdio.h>
#include<string.h>
//#define ONLINE_JUDGE
char ss[110000];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in","r",stdin);
    freopen("out","w",stdout);
#endif
    int j,len;
    int a=0,e=0,i=0,o=0,u=0,p=1,sum=0;
    while(gets(ss)!=NULL)
    {
        len=strlen(ss);
        for(j=0; j<len; j++)
        {
            if(ss[j]=='A'||ss[j]=='a')
                a++;
            if(ss[j]=='E'||ss[j]=='e')
                e++;
            if(ss[j]=='I'||ss[j]=='i')
                i++;
            if(ss[j]=='O'||ss[j]=='o')
                o++;
            if(ss[j]=='U'||ss[j]=='u')
                u++;
        }
        for(j=0;j<len;j++)
        {
            if((ss[j]>='a'&&ss[j]<='z')||(ss[j]>='A'&&ss[j]<='Z')&&ss[j]!=' ')
                sum++;
        }
        printf("case %d :\n",p);
        printf("A : %7.4lf%%\n",(double)a*100/sum);
        printf("E : %7.4lf%%\n",(double)e*100/sum);
        printf("I : %7.4lf%%\n",(double)i*100/sum);
        printf("O : %7.4lf%%\n",(double)o*100/sum);
        printf("U : %7.4lf%%\n",(double)u*100/sum);
        printf("\n");
        p++;
        a=0,e=0,i=0,o=0,u=0,sum=0,j=0,len=0;
        memset(ss,0,sizeof(ss));
    }
    return 0;
}
