#include <iostream>

using namespace std;

struct Node
{
    // Data of the Node
    int accountNumber;
    float balance;
    // End of Data of Node

    Node *next;
};

int main()
{
    // Linked List Head
    Node * head = nullptr;   // a pointer to a Node struct,  Variable name is head, data type is Node *
    // int number;   // <data type> <variable name>

    Node *accountNode1;  // a pointer
    accountNode1 = new Node;   // heap allocation of Node struct
    accountNode1->accountNumber = 101;
    accountNode1->balance = 500;
    accountNode1->next = nullptr;

    Node *accountNode2;  // a pointer
    accountNode2 = new Node;   // heap allocation of Node struct
    accountNode2->accountNumber = 567;
    accountNode2->balance = 20000;
    accountNode2->next = nullptr;

    Node *accountNode3;  // a pointer
    accountNode3 = new Node;   // heap allocation of Node struct
    accountNode3->accountNumber = 988;
    accountNode3->balance = 6850;
    accountNode3->next = nullptr;

    head = accountNode1;
    head->next = accountNode2;
    head->next->next = accountNode3;

    accountNode1 = nullptr;
    accountNode2 = nullptr;
    accountNode3 = nullptr;

    cout << "First Node: " << head->accountNumber << endl;
    cout << "Second Node: " << head->next->accountNumber << endl;
    cout << "Third Node: " << head->next->next->accountNumber << endl;

    cout << endl;
    cout << "Using loop to access the linked list" << endl;

    Node * currentNode = head;
    while(currentNode != nullptr)
    {
        cout << "Account number: " << currentNode->accountNumber << " Balance: " <<
            currentNode->balance << endl;
        currentNode = currentNode->next;
    }


    return 0;
}