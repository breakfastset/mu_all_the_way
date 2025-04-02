#ifndef STACK_H   // precompiler directives
#define STACK_H   // ensure that the file is included in compilation only once
#include <stdexcept>
const int CAPACITY = 3;

// definition of class in header h file Stack.h
class Stack
{
private:     
    int topIndex;     // attributes describe the object
    float data[CAPACITY];   // attributes describe the object

public:
    Stack();   // constructor, initialise the attributes
    ~Stack() {};  // destructor is empty, used only when there is heap data

    void Push(float newData);   // add to the top of stack
    void Pop();                 // Remove from top of the stack
    float Top();                 // get data from top of the stack
    bool IsEmpty();             // return true if stack is empty
    bool IsFull();
};

#endif