void head(char* s)
{
    int i=0,j,k;
    for(i=0; s[i]==32; i++); /*ѭ���������iֵΪǰ���ո�ĸ���*/
    if(i==0)
    {
        while(s[i]!='\0')i++;
        for(k=i-1; s[k]==32; k--);
        s[k+1]='\0';
    }
    else
    {
        for(j=i; s[j]!='\0'; j++) s[j-i]=s[j];
        while(s[i]!='\0')i++;
        for(k=i-1; s[k]==32; k--);
        s[k+1]='\0';
    }
}
void tail(char* s)
{
    int i=0,k;

}
