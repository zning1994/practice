/************************************************
Description
8���С Andy ��Ҫ�Լ�дһ���ֵ䣬��������ʶ���ֲ�̫�ࡣ
�������ͽ�����ϲ����һ����������ĵ��ʣ������һ���ֵ䡣

����������������ĸ����һ�����ʣ�
���е������ֵ��ж�Сд��
���ֵ䰴�ֵ������򣨷ϻ�����

Type
String

Analysis
�൱�ڶ�һƪ���£��ҳ����е����е��ʲ��Ұ��ֵ������������
�������� STL �е� set��
�ҵ����ʼ����� set �У��� set �Զ�������Щ���ʡ�
���ͨ����������˳��������ʼ��ɡ�
************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char word[5000][200];


int main(void)
{
	char ch, buf[200];
	int pos= 0, flag = 0;
	int n_word = 0;

	while ((ch = getchar()) != EOF) {
		if (isalpha(ch)) {		/* ����ĸ */
			flag = 1;
			buf[pos++] = tolower(ch);
		} else {
			if (flag) {			/* һ�����ʵĽ��� */
				buf[pos] = '\0';
				pos = 0;
				flag = 0;

				int i = 0, j, stat;
				while (i < n_word && (stat = strcmp(buf, word[i])) > 0)
						++i;	/* �ҵ�Ӧ�ò����λ�� */

				if (i == n_word) {					/* ����λ�ò��� */
					strcpy(word[i], buf);
					++n_word;
				} else if (!stat) 					/* ��ĳ������� */
					continue;
				else {
					for (j = n_word; j > i; --j)
						strcpy(word[j], word[j-1]);
					strcpy(word[j], buf);
					++n_word;
				}
			}
		}
	}

	int i;
	for (i = 0; i < n_word; ++i)
		printf("%s\n", word[i]);
	return 0;
}
