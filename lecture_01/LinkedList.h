#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

using namespace std;

struct Node
{
    // Data of the Node
    int accountNumber;
    float balance;
    Node *next;
};

class LinkedList
{
public:
    LinkedList();    // Constructor
    ~LinkedList();   // Destructor
    void addFront(int acctNumber, float balance);
    void append(int acctNumber, float balance);

    void printAllNodes();

private:
    Node * head;
};

LinkedList::LinkedList()
{
    head = nullptr;   // initialise the pointer to null
}

LinkedList::~LinkedList()
{
    // delete all the nodes, return memory
}

void LinkedList::addFront(int acctNumber, float balance)  // AddNode() -> add to front
{
    // Create a Node to hold the acctNumber, balance
    Node *tempNode = new Node;
    tempNode->accountNumber = acctNumber;
    tempNode->balance = balance;

    // Point the Node to the head
    tempNode->next = head;

    // Make the new Node the head
    head = tempNode;
    tempNode = nullptr;
}

void LinkedList::append(int acctNumber, float balance)  // AddNode2() -> add to back
{
    // 1. find the tail
    Node *currentNode = head;
    Node *prevNode = nullptr;

    // 2. create node
    Node *newNode = new Node;
    newNode->accountNumber = acctNumber;
    newNode->balance = balance;
    newNode->next = nullptr;

    if(head == nullptr)
    {
        head = newNode;    
    }
    else
    {
        while(currentNode != nullptr)
        {
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
        prevNode->next = newNode; // 3. point tail to new node
    }

}

void LinkedList::printAllNodes()
{
    Node * currentNode = head;
    while(currentNode != nullptr)
    {
        cout << "Account number: " << currentNode->accountNumber << " Balance: " <<
            currentNode->balance << endl;
        currentNode = currentNode->next;
    }
}
#endif