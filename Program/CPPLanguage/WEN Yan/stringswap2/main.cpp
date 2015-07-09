#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void Swap(char* str1, char* str2);

int main()
{
  char ap[10]="hello";
  char bp[20]="how are you?";
  cout <<ap <<endl <<bp <<endl;
  Swap(bp, ap);
  cout <<"½»»»ÒÔºó:\n";
  cout <<ap <<endl <<bp <<endl;
}

void Swap(char* str1, char* str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char* temp = new char[len1+1];
    strcpy(temp, str1);

    if (len1!=len2)
    {
        delete [] str1;
        str1 = new char[len2+1];
      //  str1 = (char*)realloc(str1, len2+1);
    }
    strcpy(str1, str2);

    if (len1!=len2)
    {
//        delete [] str2;
 //       str2 = new char[len1+1];
        str2 = (char*)realloc(str2, len1+1);
    }
    strcpy(str2, temp);
}
