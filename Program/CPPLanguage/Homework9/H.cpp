#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;
class Graphic
{
public:
    virtual void show() = 0;
};
class Shape : virtual public Graphic
{
public:
    virtual double area() = 0;
};
class Solid : virtual public Graphic
{
public:
    virtual double volume() = 0;
};
class Square : public Shape
{
public:
    Square(double side) : side_(side) { }
    double side() { return side_; }
    double area() { return side() * side(); }
    void show() { cout<<"Square, side:"<<side()<<", area:"<<area()<<"."<<endl; }
private:
    double side_;
};
class Circle : public Shape
{
public:
    Circle(double radius) : radius_(radius) { }
    double radius() { return radius_; }
    double area() { return PI * radius() * radius(); }
    void show() { cout<<"Circle, radius:"<<radius()<<", area:"<<area()<<"."<<endl; }
private:
    double radius_;
};
class Ball : public Circle, public Solid
{
public:
    Ball(double radius) : Circle(radius) { }
    double area() { return 4 * PI * radius() * radius(); }
    double volume() { return 4 / 3 * PI * radius() * radius() * radius(); }
    void show() { cout<<"Ball, radius:"<<radius()<<", area:"<<area()<<", volume:"<<volume()<<"."<<endl; }
};
class Cube : public Square, public Solid
{
public:
    Cube(double side) : Square(side) { }
    double area() { return 6 * side() * side(); }
    double volume() { return side() * side() * side(); }
    void show() { cout<<"Cube, side:"<<side()<<", area:"<<area()<<", volume:"<<volume()<<"."<<endl; }
};
int main()
{
    Graphic *gp[100];
    int cases;
    cin>>cases;
    for(int i = 0; i < cases; ++i)
    {
        string types;
        double value;
        cin>>types>>value;
        if(types == "square")
            gp[i] = new Square(value);
        if(types == "cube")
            gp[i] = new Cube(value);
        if(types == "ball")
            gp[i] = new Ball(value);
        if(types == "circle")
            gp[i] = new Circle(value);
    }
    for(int i = 0; i < cases; ++i)
    {
        gp[i]->show();
        delete gp[i];
    }
}
