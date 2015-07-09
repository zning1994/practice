#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
private:
    long num;
    float score;
public:
    Student(long n,float s):num(n),score(s){}
    long getNum() const {return num;}
    float getScore() const {return score;}
    void print() const {cout<<"张大千是学霸！大学霸！"<<endl<<"num : "<<num<<" score : "<<score<<endl;}
} *head=NULL;

template <class T>

class Node{
private:
    T data;
    Node<T> *next;
public:
    Node(T &d, Node *n=NULL) : data(d),next(n){}
    template <class T1>
    friend class LinkedList;
    ///张大千是学霸！大学霸！
};

template <class T>
class LinkedList{
private:
    Node *head;
public:
    LinkedList(){head = NULL;}
    void insert(T s);
    void deleteItem(T s);
    void print();
};

template <class T>
void LinkedList<T>::print() {
    Node *p = head;
    while(p!=NULL) {
        p->data.print();
        p = p->next;
    }
}

template <class T>
void LinkedList<T>::insert(T s) {
    Node<T> *n = new Node<T>(s);

    Node<T> *p = head, *q = NULL;
    while (p!= NULL) {
        q = p;
        p = p->next;
    }
    if (q==NULL)
        head = n;
    else
        q->next=n;
}

template <class T>
void LinkedList<T>::deleteItem(Student s) {
    Node<T> *p = head, *q = NULL;
    while (p!= NULL && (p->data.getNum() != s.getNum()||p->data.getScore() != s.getScore() )) {
        q = p;
        p = p->next;
    }
    if (p!=NULL) {
        if (q==NULL)
            head = p->next;
        else
            q->next=p->next;
        delete p;
    }
}

int main()
{
    long num;
    float score;
    LinkedList<Student> l;
    cout<<"inserting"<<endl;
    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>num>>score;
        Student s(num,score);
        l.insert(s);
        l.print();
    }
    cout<<"deleteing"<<endl;

    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>num>>score;
        Student s(num, score);
        l.deleteItem(s);
        l.print();
    }
}
