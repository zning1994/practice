#include <stdio.h>
int main()
{
    if(freopen("yoursister.txt","r",stdin)==NULL)
    {
        printf("0");
        freopen("yoursister.txt","w",stdout);
        printf("0");
    }
    else
    {
        printf("1");
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
