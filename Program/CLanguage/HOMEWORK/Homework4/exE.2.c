#include "stdio.h"
main()
{
    int x,y,z;
    for(x=1; x<=20; x++)
    {
        for(y=1; y<=33; y++)
        {
            for(z=3; z<=99; z+=3)
            {
                if((5*x+3*y+z/3==100)&&(x+y+z==100))/*是否满足百钱和百鸡的条件*/
                    printf("cock=%d,hen=%d,chicken=%d\n",x,y,z);
            }
        }
    }
}
