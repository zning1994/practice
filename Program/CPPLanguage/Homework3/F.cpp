#include <iostream>
#include <cstdio>
using namespace std;
class SimpleCircle{
public:
    SimpleCircle(int a=5){
        itsRadius=a;
    }
    int getRadius(){
        return itsRadius;
    }
private:
    int itsRadius;
};
int main()
{
 SimpleCircle CircleOne, CircleTwo(9);
 cout << "CircleOne: " << CircleOne.getRadius() << endl;
 cout << "CircleTwo: " << CircleTwo.getRadius() << endl;
 return 0;
}
