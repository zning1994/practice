#include<stdio.h>
int cmp(char *s1,char *s2)
{
 while (*s1 == *s2++)
  if (*s1++ == 0)
   return (0);
 return (*s1 - *(s2-1));
}
int main()
{
    char a[10],b[10];
    int p;
    scanf("%s",a);
    scanf("%s",b);
    p=cmp(a,b);
    printf("%d",p);
    return 0;
}
