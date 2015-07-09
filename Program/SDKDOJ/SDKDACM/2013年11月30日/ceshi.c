#include <stdio.h>
int f(int n){
        int r;
    r = 0;
    if (n <= 9){
        return n;
    }
    while (n > 0){
        r += n%10;
        n /= 10;
    }
    return f(r);
}
int main(){
    char s[1025];
    int i, n;
    while (scanf("%s", s) == 1){
        n = 0;
        for (i=0; s[i]; ++i){
            n += s[i]-'0';
        }
        if (n == 0){
            break;
        }
        printf("%d\n", f(n));
    }
    return 0;
}
