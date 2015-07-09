#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[1000];  //存放第一个字符串
    char b[1001];  //存放第二个字符串，并存放两个串的和

    int sum;  //存放两个数对应位上的两个数字之和
    int flag=0; //存放下一次计算是否有上次的进位
    int ippp,nppp;
    ippp=1;
    while(ippp<=nppp){
    cin>>a>>b;
    int length_a=strlen(a);  //获取第一个串的长度
    int length_b=strlen(b);  //获取第二个串的长度
    char *p_a=a+length_a-1;  //指针指向第一个串的最后
    char *p_b=b+length_b-1;   //指针指向第二个串的最后
    cout<<a<<" + "<<b<<" = ";
    char *p_s=b+(length_a>length_b?length_a:length_b)+1;  //指针指向第二个串的最后再往后两个位置,用来指向要存放的和（和要比连个两个串中的较长的那个串还多1个，因为存在进位）
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

    if(flag==0){  //如果最后一次相加无进位
            cout<<"Case "<<ippp<<":"<<endl;
        cout<<a<<" + "<<b<<" = "<<p_s+1<<endl; //从第二个数组中的第二个位置开始输出,即为求和结果
        cout<<"\n"<<endl;
        }
    else  //如果最后一次相加有进位，则把进位1，存放到第二个数组中的第一个位置
    {
        *p_s='1'; //则把进位'1'，存放到第二个数组中的第一个位置
    cout<<"Case "<<ippp<<":"<<endl;
        cout<<a<<" + "<<b<<" = "<<p_s<<endl; //从第二个数组中的第一个位置开始输出,,即为求和结果
        cout<<"\n"<<endl;
    }
    ippp++;
}
    return 0;
}
