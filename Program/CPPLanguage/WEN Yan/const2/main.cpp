#include <iostream>

using namespace std;

void mystrcpy(char * Dest ,  const char *Src)
{
	while(*Dest++=*Src++);

    *Src='c';/// error 不能修改常量
    char* temp = Src; ///error,不能把常量赋给变量指针
	*temp='c';
}

int main(){
	char a[20]="How are you!";
	char b[20];
	mystrcpy(b, a);
	cout<<b<<endl;
}
