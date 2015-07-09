 /****************************
 ����������������������ͷ�Χ�����õĸ߾��Ͷ�����POJͨ���ˣ���UVAûͨ�������������Ͽ����д�ţֱ����double���ˣ�ʵ�������������
  ****************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// �����ַ�������
void swap_str(char str[]) {
    int len = strlen(str);
    for (int i=0; i<len/2; i++) {
        int tmp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = tmp;
    }
}

// ������������˺������������ַ�����ʽ������
void my_mul(char str[], int x) {
    int len = strlen(str);
    int cp = 0, i, tmp;
    swap_str(str);

    for (i=0; i<len; i++) {
        tmp = (str[i]-'0')*x + cp;
        str[i] = (tmp%10) + '0';
        cp = tmp / 10;
    }

    while (cp) {
        str[i++] = (cp%10) + '0';
        cp /= 10;
    }

    while ('0'==str[i-1] && i>1)
        i--;
    str[i] = '\0';

    swap_str(str);
}
// �Ƚ����������Ĵ�С������ǰû��0��
int my_numCmp(char str1[], char str2[]) {
    int len1, len2;
    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 > len2)
        return 1;
    if (len1 < len2)
        return -1;

    return strcmp(str1, str2);
}

// �ַ����洢�������
void my_pow(char str[], int k, int n) {
    str[0] = '1', str[1] = '\0';
    while (n--) {
        my_mul(str, k);
    }
}

// ���ֲ�����ȷ��
int my_binary_search(int n, char str[]) {
    int high = 1e9, low = 0;
    int mid;
    char tot[2005];

    while (low < high) {
        mid = low + (high-low)/2;
        my_pow(tot, mid, n);
        int tmp = my_numCmp(tot, str);
        if (0 == tmp)
            return mid;
        if (tmp < 0)
            low = mid + 1;
        else
            high = mid;
    }
    return mid;
}

int main() {
    char str[105];
    int n;
    while (scanf("%d%s", &n, str) != EOF) {
        printf("%d\n", my_binary_search(n, str));
    }

    return 0;
}

