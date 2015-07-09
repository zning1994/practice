#include<stdio.h>
int main()
{
    int N,p,q,i=0,j,c;
    scanf("%d",&N);
    while(N>=1)
    {
        scanf("%d%d",&p,&q);
        if(p==q)
            printf("%d\n\n",p);
        else
        {
            if(q<p)
            {
                c=q,q=p,p=c;
                for(j=p; j<=q-1; j++)
                {
                    printf("%d ",j);
                }
                printf("%d\n\n",q);
            }
            else
            {
                for(j=p; j<=q-1; j++)
                {
                    printf("%d ",j);
                }
                printf("%d\n\n",q);
            }
        }
        N--;
    }
    return 0;
}
