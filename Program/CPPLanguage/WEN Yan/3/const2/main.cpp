#include <iostream>

using namespace std;

//int f(int x) {}
//int f(const int x) {}

int g(int & x) {}
//int g(const int & x) {}

int h(int * x) {}
int h(const int * x ) {}
//int h(int * const x) {}



int main()
{
    int a = 10;
    const int b = 20;

//    f(1);
//    f(a);

//    g(1); //try only non-const version
//    g(b);
//    g(a+5);
    g(a);

    h(&a);
    h(&b);
    return 0;
}
