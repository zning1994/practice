#include <iostream>

using namespace std;

class Complex {
private:
    double r, i;
public:
    Complex(double r=0, double i=0) {
        this->r = r; this->i = i;
        cout<<"¹¹Ôìº¯Êý: "<<r<<"\t"<<i<<endl;
    }
    Complex operator +(Complex c);
    friend ostream& operator<<(ostream &os, const Complex& c) ;
};

Complex Complex::operator +(Complex c) {
    return Complex(r+c.r, this->i+c.i) ;
}

ostream& operator<<(ostream &os, const Complex& c) {
    cout<<c.r;
    if (c.i>0) cout<<"+";
    if (c.i!=0) cout<<c.i<<"i"<<endl;
    return os;
}

void display(Complex c) {
    cout<<"in display: "<<c<<endl;
}

Complex fun() {
    int d=15;
    return d;  ///int->double->Complex
}

int main()
{
    Complex c1(1,2);
    Complex c2=3;        ///3->Complex
    Complex c3=c1+10;    ///10->Complex
    display(30);         ///30->Complex
    fun();

    return 0;
}
