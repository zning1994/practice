#include<stdio.h>
int main()
{
    char a[35],b[35];
    int m[35],n[35];
    int i,j,k,sum=0,sum1=0,sum2=0,np,ip,jp;
    while(scanf("%s %s",&a,&b)!=EOF)
    {
        getchar();
        for(i=0; a[i]!='\0'; i++)
            m[i]=a[i]-'0';
        for(j=0; b[j]!='\0'; j++)
            n[j]=b[j]-'0';
        for(ip=0; i>0; i--,ip++)
        {
            k=i,np=1;
            for(; k>1; k--)
                np*=2;
            sum1+=m[ip]*np;
        }
        for(jp=0; j>0; j--,jp++)
        {
            k=j,np=1;
            for(; k>1; k--)
                np*=2;
            sum2+=n[jp]*np;
        }
        printf("%d\n",sum1+sum2);
        sum=0,sum1=0,sum2=0,np=0,i=0,j=0,k=0;
    }
    return 0;
}
