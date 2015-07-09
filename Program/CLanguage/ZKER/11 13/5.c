#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    int i,len,flag=0;
    int left,right;
    gets(str);
    len=strlen(str);
//    for (i=0; i<len/2; i++)
//        if (str[i]!=str[len-i-1])
//        {
//            puts("NO");
//            flag=1;
//            break;
//        }
//    if (!flag)
//        puts("yes");
    left=0;
    right=len-1;
    while (left<right)
    {
        if (str[left]!=str[right])
        {
            puts("NO");
            //flag=1;
            return 0;
        }
        left++;
        right--;
    }
   // if (!flag)
        puts("YES");
    return 0;
}





