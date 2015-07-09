#include <iostream>

using namespace std;

template<class T,int MAXSIZE>       	//MAXSIZE是非类型参数，代表栈的容量大小
class Stack{
private:
		T elems[MAXSIZE];               		//elems数组用于存储栈的数据元素
		int top;                          		//栈顶指针
public:
		Stack(){top=0;};
		void push(T e);                		//入栈操作
		T pop();                          		//出栈操作
		bool empty(){return top==0;}  		//判断栈是否为空
		bool full(){return top==MAXSIZE;}	//判断栈是否满
};

template<class T,int MAXSIZE>			//push成员函数的类外定义
void Stack< T, MAXSIZE>::push(T e) {
		if(top==MAXSIZE){
			cout<<"栈已满，不能再加入元素了！";
			return;
		}
		elems[top++]=e;
}

template<class T,int MAXSIZE>		//pop成员函数的类外定义，指定为内联函数
T Stack<T, MAXSIZE>::pop(){
		if(top<=0){
			cout<<"栈已空，不能再弹出元素了！"<<endl;
			return 0;
		}
		top--;
		return elems[top];
}

int main()
{
    Stack<int,10>  iStack;      	//实例化Stack为int类型的栈类，栈容量为10
    Stack<char,10>  cStack;     	//实例化Stack为char类型的栈类，栈容量为10
    cout<<"-------intStack----\n";
    int i;
    for(i=1;i<10;i++)
        iStack.push(i);
    for(i=1;i<10;i++)
        cout<<iStack.pop()<<"\t";

    cout<<"\n\n-------charStack----\n";
    cStack.push('A');
    cStack.push('B');
    cStack.push('C');
    cStack.push('D');
    cStack.push('E');
    for(i=1;i<6;i++)
cout<<cStack.pop()<<"\t";
    cout<<endl;    return 0;
}
