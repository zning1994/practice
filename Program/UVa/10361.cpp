/************************************************
输入：
输入N组测试用例，每组输入两个字符串。
第一个字符串格式：s1<s2>s3<s4>s5
s1,s2,s3,s3,s4,s5都可以为空或者不存在或者全是小写字符
第二个字符串格式：s ....
输出：
每组测试用例输出两个字符串。
第一个字符串格式：s1s2s3s4s5
第二个字符串格式：ss4s3s2s5
************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define N 110
int main (){
	int i,j,Case,lena,lenb;
	char a[N],b[N],s[N],s1[N],s2[N],s3[N],s4[N],s5[N];
	while(scanf("%d\n",&Case) != EOF){
		while(Case--){
			gets(a);
			gets(b);
			lena = strlen(a);
			//第一个子串
			for(j = 0,i = 0;a[i] != '<';i++,j++){
				s1[j] = a[i];
			}
			s1[j] = '\0';
			//printf("%s\n",s1);
			//第二个子串
			for(i = i+1,j = 0;a[i] != '>';i++,j++){
				s2[j] = a[i];
			}
			s2[j] = '\0';
			//printf("%s\n",s2);
			//第三个子串
			for(i = i+1,j = 0;a[i] != '<';i++,j++){
				s3[j] = a[i];
			}
			s3[j] = '\0';
			//printf("%s\n",s3);
			//第四个子串
			for(i = i+1,j = 0;a[i] != '>';i++,j++){
				s4[j] = a[i];
			}
			s4[j] = '\0';
			//printf("%s\n",s4);
			//第五个子串
			for(i = i+1,j = 0;i < lena;i++,j++){
				s5[j] = a[i];
			}
			s5[j] = '\0';
			//printf("%s\n",s5);
			//第二个字符串
			for(i = 0,j = 0;b[i] != '.';i++,j++){
				s[j] = b[i];
			}
			s[j] = '\0';
			//printf("%s\n",s);
			//输出
			printf("%s%s%s%s%s\n",s1,s2,s3,s4,s5);
			printf("%s%s%s%s%s\n",s,s4,s3,s2,s5);
		}
	}
	return 0;
}
