#include <iostream>
#include <cstdio>
using namespace std;
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        int i;
        for (i = 1; s[i] && s[i] != c; i++);
        if (s[i])
            cout<<s[i - 1];
        else
            cout<<c;
    }
    return 0;
}
