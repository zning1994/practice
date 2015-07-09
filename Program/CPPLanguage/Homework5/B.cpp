#include <iostream>
#include <cstring>
using namespace std;
class Book{
private:
    static double total;
    static int sum;
    char *name;
    double e;
public:
    Book(char *Name,double ee){
        name=new char[strlen(Name)+1];
        strcpy(name,Name);
        e=ee;
        total+=ee;
        sum++;
    }
    char* getName()
    {
        return (this->name);
    }
    double getPrice(){
        return (this->e);
    }
    int getNumber(){
        return (this->sum);
    }
    double getTotalPrice(){
        return (this->total);
    }
};
double Book::total=0;
int Book::sum=0;
int main(){
    Book b1("C++ programming",32.5);
    Book b2("database system",23);
    cout<<b1.getName()<<":"<<b1.getPrice()<<endl;
    cout<<b2.getName()<<":"<<b2.getPrice()<<endl;
    cout<<"The total number is : " <<b1.getNumber() <<"\n"
         <<"The total price is £º " <<b1.getTotalPrice() <<endl;
    {
        Book b3("database system",23);
        cout<<"The total number is : " <<b1.getNumber()<<"\n"
             <<"The total price is £º"<<b1.getTotalPrice()<<endl;
    }                                                    //b3Éú´æÆÚ½áÊø
    cout<<"The total number is : " <<Book::getNumber() <<"\n"
         <<"The total price is £º"<<Book::getTotalPrice()<<endl;
    b2.display();
}
