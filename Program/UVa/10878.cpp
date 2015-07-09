/************************************************
【解析】：
输入从上往下看，可以看成题目所说的一段磁带。
题目给的信息很少，因此大部分信息要从输入输出得到。
（相当于给你一段明文跟密码，然后你破解其中的加密规则）


首先我们发现，磁带一共有43行，跟密码的字符个数一样（换行包括在内）。
可以猜测是否磁带的一行，代表一个字符。
然后我们可以发现，密码中相同的字符，在磁带里面的对应行，也是相同的。
更加坚定我们的猜测。


然后我们观察磁带里每行的结构。
其整体的格式一样，只有 “o” 的位置和数量有不同。
而且 “o” 只会在固定的7个位置出现。
则 7 个位置，一共可以表示出 2^7=128 种字符。
联系字符的整型特征（ASCII码），
可以猜测，磁带的每行表示着一个二进制数，这个二进制数的数值正好是对应字符的ASCII码。


看一下空格（ASCII码为32）的对应行 “ o  .   ”，
把行中的空格看作0，“o” 看作1，则可以得到二进制数0100000，正好是32。
破译完毕。
************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int c[] = { 0, 0, 64, 32, 16, 8, 0, 4, 2, 1, 0};

int main() {
	char str[15];
	int value,i;
	//freopen("C:\\Users\\XIAOSI\\Desktop\\acm.txt","r",stdin);
	gets(str);
	while(gets(str) && str[0] != '_'){
		value = 0;
		int len = strlen(str);
		for(i = 2;i < len;i++){
			if(str[i] == 'o'){
				value += c[i];
			}
		}
		printf("%c",value);
	}
}
