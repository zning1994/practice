#include <iostream>

using namespace std;

class Complex {
private:
    double r, i;
public:
    Complex(double r=0, double i=0) {this->r = r; this->i = i;}
    friend Complex add (const Complex& c1, const Complex & c2);
    friend Complex subtract (const Complex& c1, const Complex & c2);
    friend Complex multiply (const Complex& c1, const Complex & c2) ;
    friend Complex divide (const Complex& c1, const Complex & c2);
    void display() ;
};

Complex add(const Complex& c1, const Complex & c2) {
    return Complex(c1.r-c2.r, c1.i-c2.i) ;
}

Complex subtract(const Complex& c1, const Complex & c2) {
    return Complex(c1.r-c2.r, c1.i-c2.i) ;
}

Complex multiply(const Complex& c1, const Complex & c2) {
    double nr = c1.r*c2.r - c1.i*c2.i;
    double ni = c1.r*c2.i + c1.i*c2.r;
    return Complex(nr, ni);
}

Complex divide(const Complex& c1, const Complex & c2) {
    double x = 1/(c2.r*c2.r+c2.i*c2.i);
    double nr = x*(c1.r*c2.r+c1.i*c2.i);
    double ni = x*(c1.i*c2.r-c1.r*c2.i);
    return Complex(nr, ni);
}

void Complex::display() {
    cout<<r;
    if (i>0) cout<<"+";
    if (i!=0) cout<<i<<"i"<<endl;
}

int main()
{
    Complex c1(1,2),c2(3,4);
    Complex c3=add(c1,c2);
    Complex c4=subtract(c1,c2);
    Complex c5=multiply(c1,c2);
    Complex c6=divide(c1,c2);

    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    c6.display();

    return 0;
}
