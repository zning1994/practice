#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    int d,e,g,h,i;
    char f;
    printf("\n�˳������ڼ����Ǯ��ټ�����");
    do
    {
        i=0;
        printf("\n��������Ҫ���ڹ������Ǯ��(Ϊ����):");
        fflush(stdin);
        scanf("%d",&a);
        printf("\n�����빫���ļ۸�:");
        scanf("%d",&b);
        printf("\n������ĸ���ļ۸�:");
        scanf("%d",&c);
        printf("\n������С���ļ۸�:");
        scanf("%d",&d);
        for(e=0; e<=a/b; e++)
        {
            for(g=0; g<=a/c; g++)
            {
                for(h=0; h<=a/d; h++)
                {
                    if((e*b)+(g*c)+(h*d)==a)
                    {
                        printf("\n�� %d ��ѡ�� %d Ǯ���� %dֻ����, %dֻĸ��, %dֻС��",i+1,a,e,g,h);
                        i++;
                    }
                }
            }
        }
        printf("\n\t\tһ���� %d ��ѡ��",i);
        printf("\n\t�Ƿ����?(y/n)");
        fflush(stdin);
        scanf("%c",&f);
    }
    while(f=='y'||f=='Y');
    printf("\n\t�����������������رգ�\n");
    getch();
    return 0;
}
