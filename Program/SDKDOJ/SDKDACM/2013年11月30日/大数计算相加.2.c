/*
大数相加----格式完全正确版
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

分析，因为两数都超过了整型数的表数范围，因此在处理时，用字符数组分别来存放两个大数
然后再处理。处理时，要将数字字符和对应数字进行转换，并要考虑对应位上求和有进位的情况。

处理时要考虑几种情况
(1) 1+223 (串长度不同，不产生最高位进位)
(2) 223+1
(3) 111+222 (串长度相同,但不产生最高位进位)
(4) 1+999 (串长度不同，产生最高位进位)
(5) 999+1
(6) 199+1 (串长度不同，但不产生最高位进位)
(7) 1+199
(8) 999+222  (串长度相同,但产生最高位进位)

因此求和的数组长度一定要比两个串中较长的那个串长多1，因为要存放最高位进位

一种方法可以利用第3个数组，但为了节省空间，我们可以用第二个数组来存放求和结果
因为我们是从第二个串的最后一个位置再往后一个位置开始存放，
所以在依次求和中并不能影响还没用到的位上的数字


*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[1000];  //存放第一个字符串
    char b[1001];  //存放第二个字符串，并存放两个串的和
    int case_N;   //存放case个数
    int length_a;  //获取第一个串的长度
    int length_b;  //获取第二个串的长度
    char *p_a;  //指向第一个串的指针
    char *p_b;  //指向第二个串的指针
    char *p_s;  //指向第二个串的指针,存放结果
    int sum;  //存放两个数对应位上的两个数字之和
    int flag=0; //存放下一次计算是否有上次的进位
    int i; //循环控制变量
    cin>>case_N;
    for(i=1; i<=case_N; i++) //用循环完成case_N次两个大数相加
    {
        flag=0;
        cout<<"Case "<<i<<":"<<endl;
        cin>>a>>b;
        length_a=strlen(a);  //获取第一个串的长度
        length_b=strlen(b);  //获取第二个串的长度
        p_a=a+length_a-1;  //指针指向第一个串的最后
        p_b=b+length_b-1;   //指针指向第二个串的最后
        cout<<a<<" + "<<b<<" = ";
        p_s=b+(length_a>length_b?length_a:length_b)+1;  //指针指向第二个串的最后再往后两个位置,用来指向要存放的和（和要比连个两个串中的较长的那个串还多1个，因为存在进位）
        *p_s='\0';  //最后一个位置放字符串结束标记
        p_s--;  //p_s前移
        //计算求和，从各自的个位往前递增相加
        while(p_a>=a&&p_b>=b) //如果两个串对应的指针都没有到各自串的第一个位置
        {
            sum=*p_a-'0'+*p_b-'0'+flag;  //因为是字符数组，因此要进行字符对应数字的转换，并且要加上上一次相加的进位flag（0或1）
            if(sum>=10)  //对应位上数字和大于10则存在进位
            {
                flag=1;  //进位1
                *p_s=sum-10+'0'; //对应位上和减10获取对应位上数字，再转换为对应数字字符存放到数组中
            }
            else
            {
                flag=0; //不进位0
                *p_s=sum+'0';
            }
            p_a--;
            p_b--;
            p_s--;
        }


        if(p_a==a-1) //如果第一个串中数字从地位到高位都加完了
        {
            while(p_b>=b)  //则循环加第二个串中剩下没加的数字，加到字符串的第一个数字字符
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
        else //如果第二个串中数字从地位到高位都加完了
        {
            while(p_a>=a)  //则循环加第二个串中剩下没加的数字，加到字符串的第一个数字字符
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

        if(flag==0)  //如果最后一次相加无进位
            cout<<p_s+1; //从第二个数组中的第二个位置开始输出,即为求和结果
        else  //如果最后一次相加有进位，则把进位1，存放到第二个数组中的第一个位置
        {
            *p_s='1'; //则把进位'1'，存放到第二个数组中的第一个位置
            cout<<p_s; //从第二个数组中的第一个位置开始输出,,即为求和结果
        }
        if(i==case_N)
            cout<<endl;
        else
            cout<<endl<<endl;  //两个case之间有空行隔开

    }
    return 0;
}
