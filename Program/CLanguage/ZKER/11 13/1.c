#include <stdio.h>
int main()
{
    char str[80],str1[80]="computer\0science";
//    scanf("%s",str);
//    printf("str=%s\n",str);
//    getchar();
//    gets(str1);
    //puts(str1);
    strcpy(str1,"computer");
//    strcat(str1," science");
//    strcpy(str,str1);
    puts(str1);
//    puts(str);
    //printf("%d\n",strlen(str1));
    strcpy(str,"Communication");
    puts(str);
    printf("%d\n",strcmp(str1,str));
    return 0;
}





