//��Ŀ��˼��
//ͳ�Ƹ����� ���ʵ�������Ҫ���С�������в����
//
//������
//
//�ṹ����������ǱȽϷ����
//���·�Ϊͳ�ƺ���������
//
//��Ȼÿ����ĸ�����Լ��ĳ��ִ�������ô���ýṹ����ַ��ͺ�ͳ�������ͽ��а�
//
//struct zftj
//{
//     char ch;
//     int num;
// }a[26];
//����ֵ
//
//
//
//for(i=0;i<26;i++)
//     {
//         a[i].ch=i+'a';
//         a[i].num=0;
//     }
//ͳ�ƣ�����Ǵ�д��ת����Сд��ͳ��
//
//
//
//���ƴ���
//while((c=getchar())!=EOF)
//     {
//         if(c>='A'&&c<='Z')
//             c+=32;
//         if(c>='a'&&c<='z')
//             a[c-'a'].num++;
//     }
//���ƴ���
// ǰ��Ƚϲ����������һ����ĸ�����࣬��ĸ��ǰ��ͳ������Ӧ��ǰ�����ͳ����һ��������ASC2������Ҳ������ĸ��˳��
//
//
//
//���ƴ���
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
