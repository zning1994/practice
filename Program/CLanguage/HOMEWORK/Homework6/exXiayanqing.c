#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
        int A[110][110],B[110][110],m,n,b,c,i,j;
    scanf("%d",&b);
    for(c=1;c<=b;c++)
    {
      scanf("%d%d",&m,&n);
      for(i=1;i<=m;i++)
      {
          for(j=1;j<=n;j++)
          {
              scanf("%d",&A[i][j]);
          }
      }
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=m;j++)
          {
            B[i][j]=A[j][i];
            if(j%n==0) printf("%d",B[i][j]);
            else printf("%d ",B[i][j]);
          }
          printf("\n");
      }
    }
    return 0;
}
