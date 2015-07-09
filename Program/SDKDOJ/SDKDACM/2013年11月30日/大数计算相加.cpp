/*
�������----��ʽ��ȫ��ȷ��
Problem Description
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.



Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases.
Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large,
 that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.



Output
For each test case, you should output two lines. The first line is "Case #:",
# means the number of the test case. The second line is the an equation "A + B = Sum",
Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.



Sample Input
2
1 2
112233445566778899 998877665544332211


Sample Output
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110

��������Ϊ�������������������ı�����Χ������ڴ���ʱ�����ַ�����ֱ��������������
Ȼ���ٴ�������ʱ��Ҫ�������ַ��Ͷ�Ӧ���ֽ���ת������Ҫ���Ƕ�Ӧλ������н�λ�������

����ʱҪ���Ǽ������
(1) 1+223 (�����Ȳ�ͬ�����������λ��λ)
(2) 223+1
(3) 111+222 (��������ͬ,�����������λ��λ)
(4) 1+999 (�����Ȳ�ͬ���������λ��λ)
(5) 999+1
(6) 199+1 (�����Ȳ�ͬ�������������λ��λ)
(7) 1+199
(8) 999+222  (��������ͬ,���������λ��λ)

�����͵����鳤��һ��Ҫ���������нϳ����Ǹ�������1����ΪҪ������λ��λ

һ�ַ����������õ�3�����飬��Ϊ�˽�ʡ�ռ䣬���ǿ����õڶ��������������ͽ��
��Ϊ�����Ǵӵڶ����������һ��λ��������һ��λ�ÿ�ʼ��ţ�
��������������в�����Ӱ�컹û�õ���λ�ϵ�����


*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[1000];  //��ŵ�һ���ַ���
    char b[1001];  //��ŵڶ����ַ�����������������ĺ�
    int case_N;   //���case����
    int length_a;  //��ȡ��һ�����ĳ���
    int length_b;  //��ȡ�ڶ������ĳ���
    char *p_a;  //ָ���һ������ָ��
    char *p_b;  //ָ��ڶ�������ָ��
    char *p_s;  //ָ��ڶ�������ָ��,��Ž��
    int sum;  //�����������Ӧλ�ϵ���������֮��
    int flag=0; //�����һ�μ����Ƿ����ϴεĽ�λ
    int i; //ѭ�����Ʊ���
    cin>>case_N;
    for(i=1; i<=case_N; i++) //��ѭ�����case_N�������������
    {
        flag=0;
        cout<<"Case "<<i<<":"<<endl;
        cin>>a>>b;
        length_a=strlen(a);  //��ȡ��һ�����ĳ���
        length_b=strlen(b);  //��ȡ�ڶ������ĳ���
        p_a=a+length_a-1;  //ָ��ָ���һ���������
        p_b=b+length_b-1;   //ָ��ָ��ڶ����������
        cout<<a<<" + "<<b<<" = ";
        p_s=b+(length_a>length_b?length_a:length_b)+1;  //ָ��ָ��ڶ��������������������λ��,����ָ��Ҫ��ŵĺͣ���Ҫ�������������еĽϳ����Ǹ�������1������Ϊ���ڽ�λ��
        *p_s='\0';  //���һ��λ�÷��ַ����������
        p_s--;  //p_sǰ��
        //������ͣ��Ӹ��Եĸ�λ��ǰ�������
        while(p_a>=a&&p_b>=b) //�����������Ӧ��ָ�붼û�е����Դ��ĵ�һ��λ��
        {
            sum=*p_a-'0'+*p_b-'0'+flag;  //��Ϊ���ַ����飬���Ҫ�����ַ���Ӧ���ֵ�ת��������Ҫ������һ����ӵĽ�λflag��0��1��
            if(sum>=10)  //��Ӧλ�����ֺʹ���10����ڽ�λ
            {
                flag=1;  //��λ1
                *p_s=sum-10+'0'; //��Ӧλ�Ϻͼ�10��ȡ��Ӧλ�����֣���ת��Ϊ��Ӧ�����ַ���ŵ�������
            }
            else
            {
                flag=0; //����λ0
                *p_s=sum+'0';
            }
            p_a--;
            p_b--;
            p_s--;
        }


        if(p_a==a-1) //�����һ���������ִӵ�λ����λ��������
        {
            while(p_b>=b)  //��ѭ���ӵڶ�������ʣ��û�ӵ����֣��ӵ��ַ����ĵ�һ�������ַ�
            {
                sum=*p_b-'0'+flag;
                if(sum>=10)
                {
                    flag=1;
                    *p_s=sum-10+'0';
                }
                else
                {
                    flag=0;
                    *p_s=sum+'0';
                }
                p_b--;
                p_s--;
            }
        }
        else //����ڶ����������ִӵ�λ����λ��������
        {
            while(p_a>=a)  //��ѭ���ӵڶ�������ʣ��û�ӵ����֣��ӵ��ַ����ĵ�һ�������ַ�
            {
                sum=*p_a-'0'+flag;
                if(sum>=10)
                {
                    flag=1;
                    *p_s=sum-10+'0';
                }
                else
                {
                    flag=0;
                    *p_s=sum+'0';
                }
                p_a--;
                p_s--;
            }
        }

        if(flag==0)  //������һ������޽�λ
            cout<<p_s+1; //�ӵڶ��������еĵڶ���λ�ÿ�ʼ���,��Ϊ��ͽ��
        else  //������һ������н�λ����ѽ�λ1����ŵ��ڶ��������еĵ�һ��λ��
        {
            *p_s='1'; //��ѽ�λ'1'����ŵ��ڶ��������еĵ�һ��λ��
            cout<<p_s; //�ӵڶ��������еĵ�һ��λ�ÿ�ʼ���,,��Ϊ��ͽ��
        }
        if(i==case_N)
            cout<<endl;
        else
            cout<<endl<<endl;  //����case֮���п��и���

    }
    return 0;
}
