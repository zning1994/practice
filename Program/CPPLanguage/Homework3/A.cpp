#include <iostream>
using namespace std;
class Tree
{

public:
    Tree(int a)
    {
        ages=a;
    }
    void grow(int years)
    {
        ages+=years;
        age();
    }
    void age()
    {
        cout<<"这棵树的年龄为"<<ages<<endl;
    }
private:
    int ages;
};
int main()
{
    Tree t(12);
    t.age();
    t.grow(4);

    return 0;
}
