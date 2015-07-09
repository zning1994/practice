#include<stdio.h>
int cmp(char *s1,char *s2)
{
    while (*s1 == *s2++)
        if (*s1++ == 0)
            return 0;
    return (*s1 - *(s2-1));
}
void fun(char *t1,char *t2)
{
    char temp;
    temp = *t1;
    *t1 = *t2;
    *t2 = temp;
}
int main()
{
    char a[100],b[100],c[100];
    printf("Õˆİ”ÈëÈı½M×Ö·û´®:\n");
    gets(a);
    gets(b);
    gets(c);
    if(cmp(b,c)>0)
        fun(b,c);
    if(cmp(a,b)>0)
        fun(a,b);
    if(cmp(a,c)>0)
        fun(a,c);
        printf("===========\n");
//    puts(a);
    puts(b);
    puts(c);
    return 0;
}
