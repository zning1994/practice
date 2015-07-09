#include <iostream>

using namespace std;

void fn(int s)
{  //бнбн
}
void fn(int &s)
{  //бнбн
}

void fn2(int a, int b, int c=100)
{  //бнбн
}

void fn2(int a, int b)
{  //бнбн
}


int  main() {
   int  a=5;
   fn(a); // invoke ?
   fn2(1,2);
}

