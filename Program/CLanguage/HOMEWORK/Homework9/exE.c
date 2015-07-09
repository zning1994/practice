//中国智慧，神奇思想。
//Code Author: ZNing.
//Thanks for Zhangke's Thinking of this problem.
#include<stdio.h>
#include<ctype.h>
#include<string.h>
struct HOME_OF_INIT
{
    char abb[1100];
    char full[1100];
};
void SearchFullName(char c[],char b[],char a[],int start)
{
    int i,k=0,j=1;
    b[0]=a[start];
    for (i=start; a[i]!=')'; i++)
    {
        c[k++]=a[i];
        if(isalpha(a[i])&&((a[i-1]==' ')||(a[i-1]=='-')))b[j++]=a[i];
        else if(i==start) b[0]=a[start];
    }
    c[k]='\0';
    b[j]='\0';
}

int IS_Space(char a[],char b[])
{
    int i;
    for(i=0; a[i]!='\0'; i++)
        if(toupper(b[i])!=toupper(a[i]))
            return 0;
    return 1;
}
int CATCH_MAXINUM(struct HOME_OF_INIT storage[],int count)
{
    int i,max=10;
    for(i=0; i<count; i++)
        if(max<strlen(storage[i].abb))max=strlen(storage[i].abb);
    return max;
}
void OUT_PUT_SAMPLE(struct HOME_OF_INIT storage[],int count,int max)
{
    int i,j;
    printf("Abbreviation");
    for(i=0; i<max-10; i++)
        printf(" ");
    printf(" ==> Full Name\n");
    for(i=0; i<count; i++)
    {
        printf("%d:",i+1);
        if(i+1<10)
            for(j=0; j<max-strlen(storage[i].abb); j++)
                printf(" ");
        else if(i+1>=10&&i+1<100)
            for(j=0; j<max-strlen(storage[i].abb)-1; j++)
                printf(" ");
        else if(i+1>=100)
            for(j=0; j<max-strlen(storage[i].abb)-2; j++)
                printf(" ");
        printf("%s",storage[i].abb);
        printf(" ==> %s",storage[i].full);
        printf("\n");
    }
}
int main()
{
    int i,j,flag=1,count1=0,max;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    struct HOME_OF_INIT storage[900];
    char a[12000],Abb1[1200],Abb2[1200],Fnm[1200];
    while(gets(a)!=NULL)
    {
        j=0;
        for(i=0; a[i]!='\0'; i++)
        {
            if(flag==0)j=0;
            flag=1;
            if(isupper(a[i])&&isupper(a[i+1])||isupper(a[i])&&a[i+1]==' ')
            {
                if(isupper(a[i])&&a[i+1]==' ')
                {
                    if(a[i+1]==' '&&a[i+2]=='(')
                    {
                        Abb1[j++]=a[i];
                        SearchFullName(Fnm,Abb2,a,i+3);
                        Abb1[j]='\0';
                        if(IS_Space(Abb1,Abb2))
                        {
                            strcpy(storage[count1].abb,Abb1);
                            strcpy(storage[count1++].full,Fnm);
                            continue;
                        }
                        else
                        {
                            flag=0,j=0;
                            continue;
                        }
                    }
                    else
                        flag=0;
                }
                else
                    Abb1[j++]=a[i];
            }
            else
                flag=0;
        }
    }
    if(count1==0)
        printf("There is no abbreviations in this text.");
    else
    {
        max=CATCH_MAXINUM(storage,count1);
        OUT_PUT_SAMPLE(storage, count1,max);
    }
    return 0;
}


