#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in","r",stdin);
    freopen("out","w",stdout);
    char str[105][15],str1[105][15],str2[105][15];
    int n,i,m,l,h,sum=0,j;
    int c[100];
    char sc[10];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",str[i]);
        c[i]=strlen(str[i]);
    }

    for(l=1; l<n; l++)
    {
        m=0;
        for(i=0; i<n; i++)
        {
            if(c[i]==l)
            {
                strcpy(str1[m],str[i]);
                m++;
            }
        }

        for(i=1; i<=m-1; i++)
        {
           for(j=0;j<m-i;j++)
           {
                h=strcmp(str1[j],str1[j+1]);
            if(h>0)
            {
                strcpy(sc,str1[j]);
                strcpy(str1[j],str1[j+1]);
                strcpy(str1[j+1],sc);
            }
           }
        }
        for(i=0; i<m; i++)
       {
               printf("%s",str1[i]);
               sum++;
               if(sum!=n)
                printf("\n");
        }

     }
  return 0;
}

