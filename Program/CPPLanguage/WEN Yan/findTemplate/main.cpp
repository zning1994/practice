#include <iostream>

using namespace std;

int find (int * arr, int length, int value) {
    for (int i=0; i<length; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

double find (double * arr, int length, double value) {
    for (int i=0; i<length; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}



int main()
{
    int a[10] = {1, 24, 22, 2, 5, 65, 23, 76, 34, 8};
    int i=find (a, 10, 76);
    cout<<i<<endl;
    double b[10] = {1, 24, 22, 2, 5, 65, 23, 76, 34, 8};
    int j=find(b,10,22);
    cout<<j<<endl;

}
