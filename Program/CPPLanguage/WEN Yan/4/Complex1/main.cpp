#include <iostream>

using namespace std;

class Complex {
private:
    double r, i;
public:
    Complex(double r=0, double i=0) {this->r = r; this->i = i;}
    Complex add(const Complex & c);
    Complex subtract(const Complex & c);
    Complex multiply (const Complex & c) ;
    Complex divide(const Complex & c);
    void display() ;
};

Complex Complex::add(const Complex& c) {
    return Complex(r-c.r, this->i-c.i) ;
}

Complex Complex::subtract(const Complex& c) {
    return Complex(r-c.r, this->i-c.i) ;
}

Complex Complex::multiply(const Complex & c) {
    double nr = this->r*c.r - this->i*c.i;
    double ni = this->r*c.i + this->i*c.r;
    return Complex(nr, ni);
}

Complex Complex::divide(const Complex & c) {
    double x = 1/(c.r*c.r+c.i*c.i);
    double r = x*(r*c.r+i*c.i);
    double i = x*(i*c.r-r*c.i);
    return Complex(r, i);
}

void Complex::display() {
    cout<<r;
    if (i>0) cout<<"+";
    if (i!=0) cout<<i<<"i"<<endl;
}

int main()
{
    Complex c1(1,2),c2(3,4);
    Complex c3=c1.add(c2);
    Complex c4=c1.subtract(c2);
    Complex c5=c1.multiply(c2);
    Complex c6=c1.divide(c2);

    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();

    return 0;
}
