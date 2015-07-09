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
    void setNum(int n) {num=n;}
    void setScore(int s) {score = s;}
    void print() {cout<<"num : "<<num<<"  score : "<<score<<endl;}
};

class LinkedNode {
private:
    Student data;///��װ��LinkedNode�Ĺ��ܸ���������Student������ǿ��Student�������κ���������
    LinkedNode* next;
public:
    LinkedNode(const Student& d, LinkedNode* n=NULL) : data(d),next(n){}
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

class LinkedList { ///��װ��LinkedList����Ϊ��������������ȫ�ֺ���
private:
    LinkedNode * head;
    int length;
public:
    LinkedList() {head = NULL;}
    void insertItem(const Student& s);///ָ�뻹�����ã�node����student��Ӧ����student�����ã���Ϊ����list�Լ�������
    bool deleteItem(const Student& s);
    LinkedNode& elementAt(int pos);///�����Լ�Щ�����ĳ�Ա����
    int getLength();
    int search();
    void print();
};

void LinkedList::print() {
    LinkedNode *p = head;
    while(p!=NULL) {
        p->data.print();///print()�������ڻ������ͣ�Ӧ�ø�Ϊcout<<p->data; �����Ҫ���������<<
        p = p->next;
    }
}

void LinkedList::insertItem(const Student& s) { ///��Щ����Ҳ������
    LinkedNode *ln = new LinkedNode(s); ///����LinkedNode ln(s),�����и��ƹ���
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
    while (p!= NULL && (p->data.getNum()!=s.getNum() || p->data.getScore()!=s.getScore()) ){///p->data!=s;��û�з�װ�ĺܺ�
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

    LinkedList l;

    cout<<"inserting"<<endl;
    for (int i=0;i<3;i++) {
        cout<<"============"<<endl;
        cin>>num>>score;
        Student s (num, score);
        l.insertItem(s); ///��װ�������ֵ���ģʽ
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

///�ƻ���װ�Ե������ط���Student�࣬student.getNum....��LinkedNode�ķ�װ��
///����˷�װ�ԣ��������˾��ְ����϶ȵ�
