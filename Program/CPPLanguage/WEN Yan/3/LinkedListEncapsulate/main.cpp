#include <iostream>
#include <iomanip>
using namespace std;

class Student ///封装后Student不再是数据和节点的混合体
{
private:
    long num;
    float score;
public:
    Student(long n=0, float s=0):num(n),score(s){}
    long getNum() const {return num;}
    float getScore() const {return score;}
    void setNum(int n) {num=n;}
    void setScore(int s) {score = s;}
    void print() {cout<<"num : "<<num<<"  score : "<<score<<endl;}
};

class LinkedNode {
private:
    Student data;///封装后LinkedNode的功能更清晰，与Student隔离性强，Student可以是任何数据类型
    LinkedNode* next;
public:
    LinkedNode(const Student& d, LinkedNode* n=NULL) : data(d),next(n){}
    friend class LinkedList;

///可进一步封装，提供hasNext(),getNext(),appendNext();从而LinkedList不需要知道Node的细节，
///而且除了LinkedList外其他对象也能使用Node类
//    bool hasNext() {return next==NULL;}
//    LinkedNode* getNext(){return next;}
//    void appendNext(LinkedNode* nextNode);

};
//
//void LinkedNode::appendNext() {
//    if (nextNode!=NULL)
//        next = nextNode;
//};

class LinkedList { ///封装后LinkedList的行为更清晰，而不是全局函数
private:
    LinkedNode * head;
    int length;
public:
    LinkedList() {head = NULL;}
    void insertItem(const Student& s);///指针还是引用？node还是student？应该是student和引用，因为这是list自己的事情
    bool deleteItem(const Student& s);
    LinkedNode& elementAt(int pos);///还可以加些其他的成员函数
    int getLength();
    int search();
    void print();
};

void LinkedList::print() {
    LinkedNode *p = head;
    while(p!=NULL) {
        p->data.print();///print()不适用于基本类型，应该改为cout<<p->data; 因此需要重载运算符<<
        p = p->next;
    }
}

void LinkedList::insertItem(const Student& s) { ///这些函数也更普适
    LinkedNode *ln = new LinkedNode(s); ///不能LinkedNode ln(s),必须有复制过程
    LinkedNode *p = head, *q = NULL;
    while (p!= NULL) {
        q = p;
        p = p->next;
    }
    if (q==NULL)
        head = ln;
    else
        q->next=ln;///q.appendNext(ln);
}

bool LinkedList::deleteItem(const Student& s) {
    LinkedNode *p = head, *q = NULL;
    while (p!= NULL && (p->data.getNum()!=s.getNum() || p->data.getScore()!=s.getScore()) ){///p->data!=s;并没有封装的很好
        q = p;
        p = p->next;
    }
    if (p!=NULL) {
        if (q==NULL)
            head = p->next;
        else
            q->next=p->next;///q.appendNext(p->next);
        delete p;
    }
}

int main( ) ///用法上的好处
{
    long num;
    float score;

    LinkedList l;

    cout<<"inserting"<<endl;
    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>num>>score;
        Student s (num, score);
        l.insertItem(s); ///封装后都是这种调用模式
        l.print();
    }
    cout<<"deleteing"<<endl;

    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>num>>score;
        Student t(num, score);
        l.deleteItem(t);
        l.print();
    }
}

///破坏封装性的三个地方：Student类，student.getNum....，LinkedNode的封装性
///提高了封装性，各个类各司其职，耦合度低
