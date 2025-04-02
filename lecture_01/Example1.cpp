#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *b;
    b = &a;

    cout << "Address of a: " << &a << endl;
    cout << "Contents of b: " << b << endl;
    cout << "Contents of *b: " << *b << endl;  // deference b
    cout << "Address of b: " << &b << endl;
    return 0;
}