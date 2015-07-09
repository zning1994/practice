#include <iostream>

using namespace std;

class Data {
    int i;
public:
    Data(int i=0):i(i){cout<<"constructor"<<endl;}
    Data(Data& data):i(data.i){cout<<"copy constructor"<<endl;}
    ~Data() {cout<<"destructor"<<endl;}
    int getData() {return i;}
};

class Array {
    Data* arr;
    int max;
    int size;
public:
    Array(int m) {
        arr = new Data[m];
        size = 0;
    }
    void add(const Data& d) {
        arr[size++]=d;///copy constructor
    }
    void print() {
        for (int i=0;i<size;i++)
        {
            cout<<arr[i].getData()<<"\t";
        }
        cout<<endl;
    }
};

int main()
{
    Array arr(5);

    Data d1(2);
    arr.add(Data(1));
    arr.add(d1);
    arr.print();
    {
        Data d2(11);
        arr.add(d2);
        arr.print();
    }
    arr.print();

}
