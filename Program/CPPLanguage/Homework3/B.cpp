#include <iostream>
using namespace std;
class Dog{
public:
    Dog(int a, int b)
    {
        age=a;
        weight=b;
    }
    int GetAge(){
        return age;
    }
    int GetWeight(){
        return weight;
    }
    void SetAge(int a){
        age=a;
    }

    void SetWeight(int a){
        weight=a;
    }
private:
    int age,weight;
};
int main()
{
Dog Jack(2,10);
cout << "Jack is a Dog who is " ;
cout << Jack.GetAge() << " years old and ";
cout << Jack.GetWeight() << " pounds weight.\n";
Jack.SetAge(7);
Jack.SetWeight(20);
cout << "Now Jack is " ;
cout << Jack.GetAge() << " years old and ";
cout << Jack.GetWeight() << " pounds weight.";

return 0;
}
