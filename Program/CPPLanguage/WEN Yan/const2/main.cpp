#include <iostream>

using namespace std;

void mystrcpy(char * Dest ,  const char *Src)
{
	while(*Dest++=*Src++);

    *Src='c';/// error �����޸ĳ���
    char* temp = Src; ///error,���ܰѳ�����������ָ��
	*temp='c';
}

int main(){
	char a[20]="How are you!";
	char b[20];
	mystrcpy(b, a);
	cout<<b<<endl;
}
