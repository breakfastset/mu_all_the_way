#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList myLinkedList;   // construct a LinkedList object
    myLinkedList.append(988, 6850);
    myLinkedList.append(567, 20000);
    myLinkedList.append(101, 500);
    myLinkedList.append(777, 12345);

    myLinkedList.printAllNodes();
    return 0;
}