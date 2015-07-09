#include <iostream>

using namespace std;

class Complex {
private:
    double r, i;
public:
    Complex(double r=0, double i=0) {this->r = r; this->i = i;}
    Complex operator +(Complex c);
    Complex operator -(Complex c);
    Complex operator * (Complex c) ;
    Complex operator /(Complex c);
    friend Complex operator +(Complex a, Complex b);
    void display() ;
};

Complex Complex::operator +(Complex c) {
    return Complex(r+c.r, this->i+c.i) ;
}

Complex Complex::operator -(Complex c) {
    return Complex(r-c.r, this->i-c.i) ;
}

Complex Complex::operator *(Complex c) {
    double nr = this->r*c.r - this->i*c.i;
    double ni = this->r*c.i + this->i*c.r;
    return Complex(nr, ni);
}

Complex Complex::operator /(Complex c) {
    double x = 1/(c.r*c.r+c.i*c.i);
    double r = x*(r*c.r+i*c.i);
    double i = x*(i*c.r-r*c.i);
    return Complex(r, i);
}

Complex operator+(Complex a, Complex b) {
    return Complex(a.r+b.r,a.i+b.i);
}

void Complex::display() {
    cout<<r;
    if (i>0) cout<<"+";
    if (i!=0) cout<<i<<"i"<<endl;
}

int main()
{
    Complex c1(1,2),c2(3,4);
    Complex c3=c1.operator+(c2);
    Complex c4=c1-c2;
    Complex c5=c1*c2;
    Complex c6=c1/c2;

//    Complex c7=c1+10;
//    Complex c8=10+c1;
//    Complex c9=c1+c2;

//    c1.display();
//    c2.display();
//    c3.display();
//    c4.display();
//    c5.display();
//    c6.display();

    return 0;
}
