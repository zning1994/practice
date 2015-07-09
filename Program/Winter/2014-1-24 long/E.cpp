#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int risehh,risemm,sethh,setmm,starthh,startmm,endhh,endmm;
    int length,start,ended,rise,seted;
    int night,total,n,ok;
    while(scanf("%d",&n)!=EOF)
    {
        night=0,total=0,ok=1;
        if(n==0)
            break;
        else
        {
            while(n--)
            {
                scanf("%d:%d %d:%d %d:%d %d:%d",&risehh,&risemm,&sethh,&setmm,&starthh,&startmm,&endhh,&endmm);
                length=(endhh-starthh)*60+(endmm-startmm);
                start=starthh*60+startmm;
                ended=endhh*60+endmm;
                rise=risehh*60+risemm;
                seted=sethh*60+setmm;
                if(length>=120)ok=0;
                if(start+length/2<=rise||ended-length/2>=seted)
                    night+=length;
                total+=length;
            }
            if(night<600)ok=0;
            if(total<3000)ok=0;
            if(ok)
                printf("PASS\n");
            else
                printf("NON\n");
        }
    }
    return 0;
}
