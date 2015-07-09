#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *a,char *b);
int main(void)
{
 char str1[81];
 char str2[81];
 char str3[81];
 puts("ÇëÊäÈëÈý¸ö×Ö·û´®");
 scanf("%s", str1);
 scanf("%s", str2);
 scanf("%s", str3);
 if(strcmp(str1, str2)>0)
 {
  swap(str1, str2);
 }
 if(strcmp(str1, str3)>0)
 {
  swap(str1, str3);
 }
 if(strcmp(str2, str3)>0)
 {
  swap(str2, str3);
 }
 printf("%s  %s  %s", str1, str2, str3);
 system("pause");
 return 0;
}
void swap(char *a,char *b)
{
 char c[81];
 strcpy(c, a);
 strcpy(a, b);
 strcpy(b, c);
}
