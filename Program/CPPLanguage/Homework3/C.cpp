#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
class Rectangle{
public:
    Rectangle(int a,int b,int c,int d){
        x1=a,y1=b,x2=c,y2=d;
    }
    int GetArea()
    {
        return abs(x1-x2)*abs(y1-y2);
    }
private:
    int x1,x2,y1,y2;
};
int main()
{
Rectangle MyRectangle (50, 20, 100, 80 );

int Area = MyRectangle.GetArea();

cout << "Area: " << Area << "\n";
return 0;
}

