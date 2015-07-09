/************************************************
Description
8岁的小 Andy 想要自己写一本字典，但是他认识的字不太多。
于是他就将他最喜欢的一个故事里面的单词，整理成一本字典。

单个或多个连续的字母算作一个单词，
所有单词在字典中都小写。
且字典按字典序排序（废话）。

Type
String

Analysis
相当于读一篇文章，找出其中的所有单词并且按字典序排序输出。
可以利用 STL 中的 set。
找到单词即插入 set 中，则 set 自动排序这些单词。
最后通过迭代器按顺序输出单词即可。
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
		if (isalpha(ch)) {		/* 是字母 */
			flag = 1;
			buf[pos++] = tolower(ch);
		} else {
			if (flag) {			/* 一个单词的结束 */
				buf[pos] = '\0';
				pos = 0;
				flag = 0;

				int i = 0, j, stat;
				while (i < n_word && (stat = strcmp(buf, word[i])) > 0)
						++i;	/* 找到应该插入的位置 */

				if (i == n_word) {					/* 最后的位置插入 */
					strcpy(word[i], buf);
					++n_word;
				} else if (!stat) 					/* 和某个串相等 */
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
