#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char *cpy(char *str1,const char *str2)
{
    assert((str1!=NULL)&&(str2!=NULL));
    char *ncpy=str1;
    while((*str1++=*str2++)!='\0');
    return ncpy;
}
void swap(char *a,char *b)
{
    char c[81];
    cpy(c, a);
    cpy(a, b);
    cpy(b, c);
}
int cmp(char *s1,char *s2)
{
 while (*s1 == *s2++)
  if (*s1++ == 0)
   return (0);
 return (*s1 - *(s2-1));
}
int main(void)
{
    char str1[81];
    char str2[81];
    char str3[81];
    printf("Please enter the first string: \n");
    scanf("%s", str1);
    printf("Please enter the second string: \n");
    scanf("%s", str2);
    printf("Please enter the third string: \n");
    scanf("%s", str3);
    if(cmp(str1, str2)>0)
        swap(str1, str2);
    if(cmp(str1, str3)>0)
        swap(str1, str3);
    if(cmp(str2, str3)>0)
        swap(str2, str3);
    printf("==================\n");
    printf("The result is: \n");
    printf("%s\n%s\n%s\n", str1, str2, str3);
    return 0;
}
