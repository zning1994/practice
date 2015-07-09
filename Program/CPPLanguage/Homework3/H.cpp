#include <iostream>
#include <cstdio>
using namespace std;
class Book{
public:
    void setInfo(double p,int n);
    void printInfo();
    void setPrice(double p);
    void setNumber(int n);
    double totalPrice();
private:
    int number;
    double price;
};
int main()
{
    Book b1,b2;
    double price;
    int number;
    cin>>price>>number;
    b1.setInfo(price,number);
    b1.printInfo();
    cout<<"Book1's total price is: "<<b1.totalPrice()<<endl;
    cin>>price>>number;
    b2.setPrice(price);
    b2.setNumber(number);
    b2.printInfo();
    cout<<"Book2's total price is: "<<b2.totalPrice()<<endl;
    return 0;
}
void Book::setInfo(double p,int n)
{
    price=p;
    number=n;
}
void Book::printInfo()
{
    cout<<"price:"<<price<<" number:"<<number<<endl;
}
void Book::setPrice(double p)
{
    price=p;
}
void Book::setNumber(int n)
{
    number=n;
}
double Book::totalPrice()
{
    return price*number;
}
