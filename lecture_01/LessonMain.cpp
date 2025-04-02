#include <iostream>

using namespace std;

int main()
{
    int count;
    cout << "Enter number of elements in array: ";
    cin >> count;

    int *dynamicArray;   // a pointer to an array on the heap
    dynamicArray = new int[count];  // on the heap

    for(int i = 0; i < count; i++)
    {
        dynamicArray[i] = 10 * i + i;
    }

    for(int i = 0; i < count; i++)
    {
        cout << "dArray[" << i << "]: " << dynamicArray[i] << endl;
    }

    delete[] dynamicArray;   // return to OS, for every new keyword

    return 0;
}