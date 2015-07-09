/************************************************
大体题意就是将列表第一列的字符串不断换成第二列的字符串，直到将所给的整个句子中所有出现的第一列字符串全部换掉为止，然后再进行下一个字符串的替换。题目本身不难，相信只要认真一点，就可以轻松AC掉 ~
（如果用上strstr（）函数和sprintf函数会使代码简洁不少，效率也会提高不少。当然如果会用STL的string的话，同样会很快。）

这是一道替换字符串中关键字的题。就像word中用一字符串替换另外一个文本中包含的字符串。
下面代码中，找到被替换串位置后用了4步进行替换：
1、被替换串起始位置之前的字符串复制到临时字符串中；
2、将新字符串复制到临时字符串中；
3、将被替换串结束位置后的字符串复制到临时字符串中；
4、将临时字符串复制到原字符串
************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// 该函数实现将字符串str1中的str2字符串替换为str3
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
