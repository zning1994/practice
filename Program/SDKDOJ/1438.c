#include<stdio.h>
#include<string.h>
int main()
{
    int N,num,truenum[110],i;
    unsigned long long int sum=0,part=1;
    char str[110];
    scanf("%d",&N);
    while(N>0)
    {
        scanf("%s",str);
        getchar();
        num=strlen(str);
        //First: ����ĸ����ʾ�����ֽ���ת�塣
        for(i=0; i<num; i++)
        {
            if(str[i]=='a')
                truenum[i]=1;
            else if(str[i]=='b')
                truenum[i]=2;
            else if(str[i]=='c')
                truenum[i]=3;
            else if(str[i]=='d')
                truenum[i]=4;
        }
        //Second: ��ת�������ֽ���ʮ����ת����
        for(i=num-1;i>=0;i--)
        {
            sum+=truenum[i]*part;
            part*=4;
        }
        //Third: �������,���ٴθ�ֵ��ʼ��
        printf("%llu\n",sum%10000007);
        sum=0,part=1;
        N--;
    }
    return 0;
}
