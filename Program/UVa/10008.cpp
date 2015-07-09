//题目意思：
//统计给出的 单词的数量，要求从小到大排列并输出
//
//分析：
//
//结构体进行排列是比较方便的
//大致分为统计和排序两块
//
//既然每个字母都有自己的出现次数，那么就用结构体把字符型和统计数整型进行绑定
//
//struct zftj
//{
//     char ch;
//     int num;
// }a[26];
//赋初值
//
//
//
//for(i=0;i<26;i++)
//     {
//         a[i].ch=i+'a';
//         a[i].num=0;
//     }
//统计，如果是大写，转换成小写再统计
//
//
//
//复制代码
//while((c=getchar())!=EOF)
//     {
//         if(c>='A'&&c<='Z')
//             c+=32;
//         if(c>='a'&&c<='z')
//             a[c-'a'].num++;
//     }
//复制代码
// 前后比较并排序，如果后一个字母次数多，字母提前，统计数对应提前，如果统计数一样，根据ASC2码排序（也就是字母表顺序）
//
//
//
//复制代码
//for(i=0;i<26;i++)
//         for(j=i+1;j<26;j++)
//         {
//             if(a[i].num<a[j].num)
//             {
//                 t=a[i].num;
//                 a[i].num=a[j].num;
//                 a[j].num=t;
//                 temp=a[i].ch;
//                 a[i].ch=a[j].ch;
//                 a[j].ch=temp;
//             }
//             if(a[i].num==a[j].num)
//                 if(a[i].ch>a[j].ch)
//                 {
//                     t=a[i].num;
//                     a[i].num=a[j].num;
//                     a[j].num=t;
//                     temp=a[i].ch;
//                     a[i].ch=a[j].ch;
//                     a[j].ch=temp;
//                 }
//         }
#include <iostream>
#include <cstdio>
using namespace std;
 struct zftj
 {
     char ch;
     int num;
 }a[26];
 int main()
 {
     int n, i, j, t;
     char c,temp;
     scanf("%d",&n);
     while(n--)
     {
     for(i=0;i<26;i++)
     {
         a[i].ch=i+'a';
         a[i].num=0;
     }
     while((c=getchar())!=EOF)
     {
         if(c>='A'&&c<='Z')
             c+=32;
         if(c>='a'&&c<='z')
             a[c-'a'].num++;
     }
     for(i=0;i<26;i++)
         for(j=i+1;j<26;j++)
         {
             if(a[i].num<a[j].num)
             {
                 t=a[i].num;
                 a[i].num=a[j].num;
                 a[j].num=t;
                 temp=a[i].ch;
                 a[i].ch=a[j].ch;
                 a[j].ch=temp;
             }
             if(a[i].num==a[j].num)
                 if(a[i].ch>a[j].ch)
                 {
                     t=a[i].num;
                     a[i].num=a[j].num;
                     a[j].num=t;
                     temp=a[i].ch;
                     a[i].ch=a[j].ch;
                     a[j].ch=temp;
                 }
         }
     for(i=0;i<26;i++)
         if(a[i].num>0)
             printf("%c %d\n",a[i].ch-32,a[i].num);
     }
     return 0;
 }
