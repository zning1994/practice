#include <iostream>

using namespace std;

void fn(int s)
{  //����
}
void fn(int &s)
{  //����
}

void fn2(int a, int b, int c=100)
{  //����
}

void fn2(int a, int b)
{  //����
}


int  main() {
   int  a=5;
   fn(a); // invoke ?
   fn2(1,2);
}

