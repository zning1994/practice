#include <iostream>

using namespace std;

void Swap(char*& str1, char*& str2);

int main()
{
  char* ap="hello";
  char* bp="how are you?";
  cout <<ap <<endl <<bp <<endl;
  Swap(ap, bp);
  cout <<"�����Ժ�:\n";
  cout <<ap <<endl <<bp <<endl;
}

void Swap(char*& str1, char*& str2)
{  char* temp=str1;
  	str1=str2;  str2=temp;
}
