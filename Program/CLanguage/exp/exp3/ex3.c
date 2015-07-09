#include<stdio.h>
int main()
{
    int a,i=1,max,count=1;
    scanf("%d",&a);
    max=a;
    while(scanf("%d",&a)!=EOF)
    {
////        if(max<=a)
////            max=a;
////        b[i++]=max;
////        if(b[i-1]==max);
////        count++;
//        b[count++]=a;
//        if(max<=a)
//            max=a;
//for(; count>=0; count--)
//    {
//        if(b[count]==max)
//            i++;
//   }
        while(count==1)
        {
            count--;
            if(max<=a)
            {

                if(max=a)
                {
                    i++;
                    max=a;
                }
                if(max<a)
                    i=1;

            }
            printf("maximum data is %d, whose occurences is %d.\n",max,i);
        }

        count=1;
    }
    return 0;
}
