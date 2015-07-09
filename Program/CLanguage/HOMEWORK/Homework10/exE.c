#include<stdio.h>
#define MAX 100
int main()
{
//    freopen("in","r",stdin);
//    freopen("out","w",stdout);
    int i,M,N,R,array[MAX],data[MAX],temp=0;
    //Frist: scan the data.
    scanf("%d",&M);
    while(M>0)
    {
        scanf("%d",&N);
        if(N==0)printf("\n");
        else
        {
            scanf("%d",&R);
            for(i=0; i<N; i++)
                scanf("%d",&array[i]);
            //second: do something in these data.
            if(R>0)
            {
                while(R>=N)
                    R=R-N;
                for(i=0; i<N; i++)
                {
                    temp=i+R;
                    if(temp>=N)
                    {
                        temp-=N;
                        data[temp]=array[i];
//                        printf("temp:%d i:%d\n",temp,i);
                    }
                    else if(temp<N)
                    {
                        data[temp]=array[i];
//                        printf("temp:%d i:%d\n",temp,i);
                    }
                }
                //third: output.
                printf("%d",data[0]);
                for(i=1; i<N; i++)
                    printf(" %d",data[i]);
                printf("\n");
            }
            else if(R<0)
            {
                R=-R;
                while(R>=N)
                    R=R-N;
                for(i=0; i<N; i++)
                {
                    temp=i-R;
                    if(temp<0)
                    {
                        temp=N+temp;
                        data[temp]=array[i];
//                        printf("temp:%d i:%d\n",temp,i);
                    }
                    else if(temp>=0)
                    {
                        data[temp]=array[i];
//                        printf("temp:%d i:%d\n",temp,i);
                    }
                }
                //third: output.
                printf("%d",data[0]);
                for(i=1; i<N; i++)
                    printf(" %d",data[i]);
                printf("\n");
            }
            else if(R==0)
            {
                printf("%d",array[0]);
                for(i=1; i<N; i++)
                    printf(" %d",array[i]);
                printf("\n");
            }
        }
        M--,temp=0;
    }
    return 0;
}
