/************************************************
输入的前六位数表示一个小数，然后输入一个数表示几次方。要求用高精度算出结果。
高精度水题，主要注意处理小数点，先在输入时把小数点提取出来并记录位置，用普通乘法计算出结果后由后向前计算位置添加小数点。
************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 300;

void Mul(char *str1, char *str2, char *str3){
	int  i, j, i1, i2, tmp, carry, jj;
	int  len1 = strlen(str1), len2 = strlen(str2);
	char  ch;

	jj = carry = 0;

	for( i1=len1-1; i1 >= 0; --i1 ){
		j = jj;
		for( i2=len2-1; i2 >= 0; --i2, ++j ){
			tmp =
				(str3[j]-'0')+(str1[i1]-'0')*(str2[i2]-'0')+carry;
			if( tmp > 9 ){
				carry = tmp/10; str3[j] = tmp%10+'0';
			}
			else {
				str3[j] = tmp+'0'; carry = 0;
			}
		}
		if( carry ) {
			str3[j] = carry+'0'; carry = 0; ++j;
		}
		++jj;
	}
	--j;
	while( str3[j] == '0' && j > 0 ) --j;
	str3[++j] = '\0';
	for( i=0, --j; i < j; ++i, --j ){
		ch = str3[i]; str3[i] = str3[j]; str3[j] = ch;
	}
}

int main() {
	char num[maxn], res[maxn], t[maxn];
	int n;
	while (1) {
		int p, tmp, i = 0;
		while ((tmp = getchar()) != EOF && tmp != ' ')
			if (tmp == '.')
				p = i;
			else{
				t[i]= num[i] = tmp;
				i++;
			}
		for (int j = i - 1; j >= 0; j--)
			if (num[j] != '0') {
				i = j + 1;
				break;
			}
		t[i] = num[i] = '\0';
		if (scanf("%d", &n) == EOF)
			break;
		p = (strlen(num) - p) * n;
		getchar();
		memset(res, '0', sizeof(res));
		for (int i = 0; i < n - 1; i++) {
			Mul(num, t, res);
		//	if (i == n - 1)
		//	   	printf("%s %s %s\n", num, t, res);
		//printf("hehe\n%s\n", res);
			if (i != n - 2)
			for (int j = 0; j < maxn; j++) {
				t[j] = res[j];
			   	res[j] = '0';
			}
		}
		if (p >= strlen(res)) {
			printf(".");
			for (int i = 0; i < p - strlen(res); i++)
				printf("0");
			printf("%s\n", res);
		}
		else {
			int i;
			for (i = 0; i < strlen(res) - p; i++)
				printf("%c", res[i]);
			printf(".");
			printf("%s\n", res + strlen(res) - p);
		}
	}
	return 0;
}
