/************************************************
����������ǽ��б��һ�е��ַ������ϻ��ɵڶ��е��ַ�����ֱ�����������������������г��ֵĵ�һ���ַ���ȫ������Ϊֹ��Ȼ���ٽ�����һ���ַ������滻����Ŀ�����ѣ�����ֻҪ����һ�㣬�Ϳ�������AC�� ~
���������strstr����������sprintf������ʹ�����಻�٣�Ч��Ҳ����߲��١���Ȼ�������STL��string�Ļ���ͬ����ܿ졣��

����һ���滻�ַ����йؼ��ֵ��⡣����word����һ�ַ����滻����һ���ı��а������ַ�����
��������У��ҵ����滻��λ�ú�����4�������滻��
1�����滻����ʼλ��֮ǰ���ַ������Ƶ���ʱ�ַ����У�
2�������ַ������Ƶ���ʱ�ַ����У�
3�������滻������λ�ú���ַ������Ƶ���ʱ�ַ����У�
4������ʱ�ַ������Ƶ�ԭ�ַ���
************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// �ú���ʵ�ֽ��ַ���str1�е�str2�ַ����滻Ϊstr3
bool replace(char str1[], char str2[], char str3[]) {

    bool flag = true;
    char *x1 = strstr(str1, str2);
    if (x1 == NULL) {
        return false;
    }

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);
    int j = 0, i;

    char tmp[1050];

    for (i=0; i<(x1-str1); i++)
        tmp[j++] = str1[i];
    for (i=0; i<len3; i++)
        tmp[j++] = str3[i];
    for (i=(x1-str1+len2); i<len1; i++)
        tmp[j++] = str1[i];

    tmp[j] = '\0';

    strcpy(str1, tmp);

    return true;
}

int main() {

    char str[1050];
    char a[15][1050], b[15][1050];
    int n;

    while (scanf("%d", &n) && n) {
        getchar();

        for (int i=0; i<n; i++) {
            gets(a[i]);
            gets(b[i]);
        }
        gets(str);
        for (int i=0; i<n; i++) {
            while (replace(str, a[i], b[i]));
        }
        printf("%s\n", str);
    }

    return 0;
}
