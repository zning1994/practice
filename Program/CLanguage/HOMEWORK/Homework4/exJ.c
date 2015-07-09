#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i=0,j;
    int m[5],n[5];
    while(scanf("%d",&a)!=EOF)
    {
        for(j=a; j>=0; j++)
        {
            a++;
            b=a;
            while(i<4)
            {
                m[i]=a%10;
                a/=10;
                printf("%d\n",m[i]);
                i++;
            }
            //            for(i=0; i<=3; )
//            {
//
//            }
            if(m[0]!=m[1]&&m[0]!=m[2]&&m[0]!=m[3]&&m[1]!=m[2]&&m[1]!=m[3]&&m[2]!=m[3])
                break;
//            else
//            {
//                memset(m,0,sizeof(m));
//                i=0;
//            }

//        for(j=0; j<=3; )
//        {
//            printf("%d\n",m[j++]);
//        }
        }
//        printf("%d\n",b);
    }
    return 0;
}
