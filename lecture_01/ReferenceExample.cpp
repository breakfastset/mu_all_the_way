#include <iostream>

using namespace std;
// bool divide(int number, int divisor, int &quotient, int &remainder);

void changeThis(int a);
void changeThat(int & a);

int main()
{
    int x = 123;
    changeThis(x);
    cout << "x after changeThis(): " << x << endl;
    changeThat(x);
    cout << "x after changeThat(): " << x << endl;

    int * newX = new int;   // memory on stack (single value)
    *newX = 234;
    delete newX;
    newX = nullptr;        // to be safe

    int * newArray = new int[50];
    // ....
    delete[] newArray;    
    newArray = nullptr;    // to be safe

    return 0;
}

void changeThis(int a)   // pass by value
{
    a = 100;
}

void changeThat(int & a)  // pass by reference
{
    a = 999;
}
