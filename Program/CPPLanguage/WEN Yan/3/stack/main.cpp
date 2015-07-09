#include <iostream>

using namespace std;

template<class T,int MAXSIZE>       	//MAXSIZE�Ƿ����Ͳ���������ջ��������С
class Stack{
private:
		T elems[MAXSIZE];               		//elems�������ڴ洢ջ������Ԫ��
		int top;                          		//ջ��ָ��
public:
		Stack(){top=0;};
		void push(T e);                		//��ջ����
		T pop();                          		//��ջ����
		bool empty(){return top==0;}  		//�ж�ջ�Ƿ�Ϊ��
		bool full(){return top==MAXSIZE;}	//�ж�ջ�Ƿ���
};

template<class T,int MAXSIZE>			//push��Ա���������ⶨ��
void Stack< T, MAXSIZE>::push(T e) {
		if(top==MAXSIZE){
			cout<<"ջ�����������ټ���Ԫ���ˣ�";
			return;
		}
		elems[top++]=e;
}

template<class T,int MAXSIZE>		//pop��Ա���������ⶨ�壬ָ��Ϊ��������
T Stack<T, MAXSIZE>::pop(){
		if(top<=0){
			cout<<"ջ�ѿգ������ٵ���Ԫ���ˣ�"<<endl;
			return 0;
		}
		top--;
		return elems[top];
}

int main()
{
    Stack<int,10>  iStack;      	//ʵ����StackΪint���͵�ջ�࣬ջ����Ϊ10
    Stack<char,10>  cStack;     	//ʵ����StackΪchar���͵�ջ�࣬ջ����Ϊ10
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
