#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack s1;
    if(s1.IsEmpty())
    {
        cout << "Stack is empty!" << endl;
    }

    cout << "Adding 4 items to stack of capacity 3!" << endl;
    s1.Push(3.14);
    s1.Push(9.81);
    s1.Push(3.00);
    s1.Push(6.1);

    while(!s1.IsEmpty())
    {
        cout << s1.Top() << endl;
        s1.Pop();

    }

    cout << endl;
    cout << "End of program" << endl;
    return 0;
}