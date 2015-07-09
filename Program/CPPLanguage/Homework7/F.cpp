#include <iostream>
using namespace std;
class Counter{
private:
    int a;
public:
    Counter(){a=0;}
    Counter(int b){a=b;}
    int getValue(){return a;}
    Counter operator+(Counter p){
        return Counter(this->a+p.a);
    }
};
int main()
{
   Counter varOne(2), varTwo(4), varThree;
   varThree = varOne + varTwo;
   cout << "varOne: " << varOne.getValue()<< endl;
   cout << "varTwo: " << varTwo.getValue() << endl;
   cout << "varThree: " << varThree.getValue() << endl;

   return 0;
}
