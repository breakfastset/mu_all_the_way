#include "Stack.h"

Stack::Stack()
{
    topIndex = -1;  // empty stack at first
}

void Stack::Push(float newData)
{
    if(IsFull()) 
    {
        return;
    }
    else
    {
        topIndex++;  // update top
        data[topIndex] = newData;  // add item to top
    }
}

void Stack::Pop()
{
    if(!IsEmpty())
    {
        topIndex--;
    }
}

float Stack::Top()
{
    if(IsEmpty())
    {
        throw std::out_of_range("Stack is Empty!");
    }
    return data[topIndex];  // return top of stack  
}

bool Stack::IsEmpty()
{
    return topIndex == -1;
}

bool Stack::IsFull()
{
    return topIndex == (CAPACITY - 1);
}