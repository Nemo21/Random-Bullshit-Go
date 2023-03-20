#include <bits/stdc++.h>
#include <vector>
#include <stdlib.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<ll, ll>
#define vi vector<ll>
#define vt(type) vector<type>
#define si set<ll>

// for creating a single node
class Node
{
public:
    int data;
    Node *nextaddress;
    // constructor for making linked list
    Node(int data)
    {
        this->data = data;        // input data
        this->nextaddress = NULL; // created an isolated node
    }
    // destructor for freeing memory when deletion of an element
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->nextaddress != NULL)
        {
            delete nextaddress;
            this->nextaddress = NULL;
        }
        cout << "memory free for " << value << endl;
    }
};

void InsertionAtHead(Node *&endpointer, int element, int datainsert)
{
    // here function parameter in head is taken reference to avoid creating a copy
    // whenever new node comes, we first create that new node
    if (endpointer == NULL) // linked list is empty
    {
        Node *newnode1 = new Node(datainsert);
        endpointer = newnode1;
        newnode1->nextaddress = newnode1;
    }
    else // non empty linked list
    {
        Node *currentpointer = endpointer;
        while (currentpointer->data != element)
        {
            currentpointer = currentpointer->nextaddress;
        }
        Node *newnode1 = new Node(datainsert);
        newnode1->nextaddress = currentpointer->nextaddress;
        currentpointer->nextaddress = newnode1;
    }
}
void DeleteNode(Node *&endpointer, int element)
{
    // empty list
    if (endpointer == NULL)
    {
        cout << "Underflow ";
        return;
    }
    else // non empty list
    {
        Node *previouspointer = endpointer;
        Node *currentpointer = previouspointer->nextaddress;
        while (currentpointer->data != element)
        {
            previouspointer = currentpointer;
            currentpointer = currentpointer->nextaddress;
        }
        previouspointer->nextaddress = currentpointer->nextaddress;
        if (endpointer == currentpointer)
        {
            endpointer = previouspointer;
        }
        if (currentpointer == previouspointer)
        {
            endpointer = NULL;
        }
        currentpointer->nextaddress = NULL;
        delete currentpointer;
    }
}
void PrintLinkedList(Node *&endpointer)
{
    // pointer at head
    Node *traversepointer = endpointer;
    cout << endpointer->data << " ";
    // move forward with this pointer until its NULL
    while (endpointer->nextaddress != traversepointer)
    {
        // print the data of the current node
        cout << endpointer->data << " ";
        // move forward
        endpointer = endpointer->nextaddress;
    }
}
int main()
{
    Node *endpointer = NULL;
    InsertionAtHead(endpointer, 5, 3);
    PrintLinkedList(endpointer);
    InsertionAtHead(endpointer, 3, 5);
    PrintLinkedList(endpointer);
    InsertionAtHead(endpointer, 5, 7);
    PrintLinkedList(endpointer);
    InsertionAtHead(endpointer, 7, 9);
    PrintLinkedList(endpointer);
    return 0;
}
