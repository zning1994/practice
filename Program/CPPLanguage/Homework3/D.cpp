#include <iostream>
#include <cstdio>
#define PI 3.1415926
using namespace std;
class Circle{
public:
    Circle(float a){
        Radius=a;
    }
    float GetArea(){
        return Radius*Radius*PI;
    }
private:
    float Radius;
};
int main()
{
float radius;
cin >> radius;
Circle p(radius);
printf("this radius is:%d and its area is:%.1f\n",(int)radius,p.GetArea ());
}
