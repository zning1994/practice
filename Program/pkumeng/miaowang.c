#include<stdio.h>
int main()
{
    int n,m,k,i=0;
    printf("���ˣ���������Ҫ�Ķ�����ţ�1������2������3������4������5�����ꡫ����");
    scanf("%d",&m);
    if(m==1)
    {
        printf("���ˣ���������Ҫ����������");
        scanf("%d",&n);
        k=0;
        if(n<=1000&&n>0)
        {
            while(n<=k)
            {
                for(i=1; i>0; i++)
                {
                    printf("* ");
                }
                printf("\n");
                k++;
            }
            printf("���ˣ����Ѿ������ˡ�\n");
        }
        else if(n==0)
            printf("���ˣ�������������\n");
        else if(n>1000)
            printf("����������ô��\n");
        else
            printf("���ˣ�����ɶ��\n");
    }
    else if(m==2)
    {
        printf("���ˣ���������Ҫ����������");
        scanf("%d",&n);
        if(n<=1000&&n>0)
        {
            while(n!=0)
            {
                for(i=n; i>0; i--)
                {
                    printf("��");
                }
                printf("\n");
                n--;
            }
            printf("���ˣ����Ѿ������ˡ�\n");
        }
        else if(n==0)
            printf("���ˣ�������������\n");
        else if(n>1000)
            printf("����������ô��\n");
        else
            printf("���ˣ�����ɶ��\n");
    }
    else if(m==3)
    {
        printf("���ˣ���������Ҫ����������");
        scanf("%d",&n);
        if(n<=1000&&n>0)
        {
            while(n!=0)
            {
                for(i=n; i>0; i--)
                {
                    printf("��");
                }
                printf("\n");
                n--;
            }
            printf("���ˣ����Ѿ������ˡ�\n");
        }
        else if(n==0)
            printf("���ˣ��ҿ���������\n");
        else if(n>1000)
            printf("����������ô��\n");
        else
            printf("���ˣ�����ɶ��\n");
    }
    else if(m==4)
    {
        printf("���ˣ���������Ҫ����������");
        scanf("%d",&n);
        if(n<=1000&&n>0)
        {
            while(n!=0)
            {
                for(i=n; i>0; i--)
                {
                    printf("��");
                }
                printf("\n");
                n--;
            }
            printf("���ˣ����Ѿ������ˡ�\n");
        }
        else if(n==0)
            printf("���ˣ��ҹ���������\n");
        else if(n>1000)
            printf("����������ô��\n");
        else
            printf("���ˣ�����ɶ��\n");
    }
    else if(m==5)
    {
        printf("���ˣ���������Ҫ�����������");
        scanf("%d",&n);
        if(n<=1000&&n>0)
        {
            while(n!=0)
            {
                for(i=n; i>0; i--)
                {
                    printf("����");
                }
                printf("\n");
                n--;
            }
            printf("���ˣ����Ѿ�������ˡ�\n");
        }
        else if(n==0)
            printf("���ˣ��Һ��겻������\n");
        else if(n>1000)
            printf("����������ô��\n");
        else
            printf("���ˣ�����ɶ��\n");
    }
    else
        printf("���ˣ����Բ����𡫡���\n");
    system("pause");
    return 0;
}
