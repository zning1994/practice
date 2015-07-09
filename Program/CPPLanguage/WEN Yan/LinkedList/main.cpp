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
    void print() const {cout<<"num :"<<num<<" score :"<<score<<endl;}
} *head=NULL;

class Node{
private:
    Student data;
    Node *next;
public:
    Node(Student &d, Node *n=NULL) : data(d),next(n){}
    ///张大千是学霸！大学霸！


};

class LinkedList{
private:
    Node *head;
public:
    LinkedList(){head = NULL;}
    void insert(long num, float score);
    void deleteItem(long num, float score);
    void print();
};

int main( )
{
    long num;
    float score;
    cout<<"inserting"<<endl;
    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>num>>score;
        insert(num, score);
        print();
    }
    cout<<"deleteing"<<endl;

    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>num>>score;
        deleteItem(num, score);
        print();
    }
}

void print() {
    Student *p = head;
    while(p!=NULL) {
        cout<<p->num<<"   "<<p->score<<endl;
        p = p->next;
    }
}

void LinkedList::insert(Student s) {
    Student *s = new Student;
    s->num = num;
    s->score = score;
    s->next = NULL;

    Student *p = head, *q = NULL;
    while (p!= NULL) {
        q = p;
        p = p->next;
    }
    if (q==NULL)
        head = s;
    else
        q->next=s;
}

void LinkedList::deleteItem(Student s) {
    Student *p = head, *q = NULL;
    while (p!= NULL && (p->num != num||p->score != score) ) {
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
