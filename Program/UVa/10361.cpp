/************************************************
���룺
����N�����������ÿ�����������ַ�����
��һ���ַ�����ʽ��s1<s2>s3<s4>s5
s1,s2,s3,s3,s4,s5������Ϊ�ջ��߲����ڻ���ȫ��Сд�ַ�
�ڶ����ַ�����ʽ��s ....
�����
ÿ�����������������ַ�����
��һ���ַ�����ʽ��s1s2s3s4s5
�ڶ����ַ�����ʽ��ss4s3s2s5
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
			//��һ���Ӵ�
			for(j = 0,i = 0;a[i] != '<';i++,j++){
				s1[j] = a[i];
			}
			s1[j] = '\0';
			//printf("%s\n",s1);
			//�ڶ����Ӵ�
			for(i = i+1,j = 0;a[i] != '>';i++,j++){
				s2[j] = a[i];
			}
			s2[j] = '\0';
			//printf("%s\n",s2);
			//�������Ӵ�
			for(i = i+1,j = 0;a[i] != '<';i++,j++){
				s3[j] = a[i];
			}
			s3[j] = '\0';
			//printf("%s\n",s3);
			//���ĸ��Ӵ�
			for(i = i+1,j = 0;a[i] != '>';i++,j++){
				s4[j] = a[i];
			}
			s4[j] = '\0';
			//printf("%s\n",s4);
			//������Ӵ�
			for(i = i+1,j = 0;i < lena;i++,j++){
				s5[j] = a[i];
			}
			s5[j] = '\0';
			//printf("%s\n",s5);
			//�ڶ����ַ���
			for(i = 0,j = 0;b[i] != '.';i++,j++){
				s[j] = b[i];
			}
			s[j] = '\0';
			//printf("%s\n",s);
			//���
			printf("%s%s%s%s%s\n",s1,s2,s3,s4,s5);
			printf("%s%s%s%s%s\n",s,s4,s3,s2,s5);
		}
	}
	return 0;
}
