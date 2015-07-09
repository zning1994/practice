#include <iostream>
#include <iomanip>
using namespace std;

class Student ///��װ��Student���������ݺͽڵ�Ļ����
{
private:
    long num;
    float score;
public:
    Student(long n=0, float s=0):num(n),score(s){}
    long getNum() const {return num;}
    float getScore() const {return score;}
    void print() {cout<<"num : "<<num<<"  score : "<<score<<endl;}
    bool operator != (const Student& stu) const {return score!=stu.score || num != stu.num;}
    friend ostream& operator <<(ostream& os, const Student& stu);
};

ostream& operator <<(ostream& os, const Student& stu) {
    os<<"num : "<<stu.num<<"  score : "<<stu.score;
    return os;
}


template <class T>
class LinkedNode {
private:
    T data;///��װ��LinkedNode�Ĺ��ܸ���������Student������ǿ��Student�������κ���������
    LinkedNode<T>* next;
public:
    LinkedNode(const T& d, LinkedNode* n=NULL) : data(d),next(n){}
    template <class T1>
    friend class LinkedList;


///�ɽ�һ����װ���ṩhasNext(),getNext(),appendNext();�Ӷ�LinkedList����Ҫ֪��Node��ϸ�ڣ�
///���ҳ���LinkedList����������Ҳ��ʹ��Node��
//    bool hasNext() {return next==NULL;}
//    LinkedNode* getNext(){return next;}
//    void appendNext(LinkedNode* nextNode);

};
//
//void LinkedNode::appendNext() {
//    if (nextNode!=NULL)
//        next = nextNode;
//};
template <class T>
class LinkedList { ///��װ��LinkedList����Ϊ��������������ȫ�ֺ���
private:
    LinkedNode<T> * head;
//    int length;
public:
    LinkedList() {head = NULL;}
    void insertItem(const T& s);///ָ�뻹�����ã�node����student��Ӧ����student�����ã���Ϊ����list�Լ�������
    bool deleteItem(const T& s);
    void print();
///�����ĳ�Ա����
/*
    LinkedNode& elementAt(int pos);///�����Լ�Щ�����ĳ�Ա����
    int getLength();
    int search();

    */
};
template <class T>
void LinkedList<T>::print() {
    LinkedNode<T> *p = head;
    while(p!=NULL) {
//        p->data.print();///print()�������ڻ������ͣ�Ӧ�ø�Ϊcout<<p->data; �����Ҫ���������<<
        cout<<p->data<<endl;
        p = p->next;
    }
}
template <class T>
void LinkedList<T>::insertItem(const T& s) { ///��Щ����Ҳ������
    LinkedNode<T> *ln = new LinkedNode<T>(s); ///����LinkedNode ln(s),�����и��ƹ���
    LinkedNode<T> *p = head, *q = NULL;
    while (p!= NULL) {
        q = p;
        p = p->next;
    }
    if (q==NULL)
        head = ln;
    else
        q->next=ln;///q.appendNext(ln);
}
template <class T>
bool LinkedList<T>::deleteItem(const T& s) {
    LinkedNode<T> *p = head, *q = NULL;
//    while (p!= NULL && (p->data.getNum()!=s.getNum() || p->data.getScore()!=s.getScore()) ){///p->data!=s;��û�з�װ�ĺܺ�
    while (p!= NULL && p->data!=s ){///p->data!=s;��û�з�װ�ĺܺ�
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

int main( ) ///�÷��ϵĺô�
{
    long num;
    float score;

    LinkedList<Student> l;

    cout<<"inserting"<<endl;
    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>num>>score;
        ;
        l.insertItem(Student  (num, score)); ///��װ�������ֵ���ģʽ
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


    LinkedList<double> l2;
    double d;

    cout<<"inserting"<<endl;
    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>d;
        l2.insertItem(d); ///��װ�������ֵ���ģʽ
        cout<<"After Insert"<<endl;
        l2.print();
    }
    cout<<"deleteing"<<endl;

    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>d;
        l2.deleteItem(d);
        cout<<"After Delete"<<endl;
        l2.print();
    }
}

///�ƻ���װ�Ե������ط���Student�࣬student.getNum....��LinkedNode�ķ�װ��
///����˷�װ�ԣ��������˾��ְ����϶ȵ�
