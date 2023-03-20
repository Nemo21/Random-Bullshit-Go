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
    int datainsert;
    Node *prevaddress;
    Node *nextaddress;
    // constructor
    Node(int datainsert)
    {
        this->datainsert = datainsert;
        this->prevaddress = NULL;
        this->nextaddress = NULL;
    }
    ~Node()
    {
        int value = this->datainsert;
        if (nextaddress != NULL)
        {
            delete nextaddress;
            nextaddress = NULL;
        }
        cout << "memory free from node" << datainsert << endl;
    }
};

void InsertionAtHead(Node *&endpointer, Node *&head, int datainsert)
{
    // here function parameter in head is taken reference to avoid creating a copy
    // whenever new node comes, we first create that new node
    // this is case for empty list
    if (head == NULL)
    {
        Node *newnode1 = new Node(datainsert);
        head = newnode1;
        endpointer = newnode1;
    }
    else
    {
        Node *newnode1 = new Node(datainsert);
        // when new node is created its address is pointing to NULL, so we change that to address of head
        newnode1->nextaddress = head;
        head->prevaddress = newnode1;
        // now since we know that head always points to first node,so we change head to the first node that is newnode1
        head = newnode1;
    }
}
void InsertAtEnd(Node *&head, Node *&endpointer, int datainsert)
{
    // empty linked list case
    if (endpointer == NULL)
    {
        Node *newnode1 = new Node(datainsert);
        endpointer = newnode1;
        head = newnode1;
    }
    else
    {
        Node *newnode1 = new Node(datainsert);
        // address of previous node now points to the newly added node
        endpointer->nextaddress = newnode1;
        newnode1->prevaddress = endpointer;
        // endpointer would always point to the last node so we change endpointer to address of lastnode
        endpointer = newnode1;
    }
}
void InsertAtSomePosition(Node *&endpointer, Node *&head, int position, int datainsert)
{
    // means it is the case of insertion at head
    if (position == 1)
    {
        InsertionAtHead(endpointer, head, datainsert);
        return;
    }
    Node *traversepointer = head;
    int count = 1;
    while (count < position - 1)
    {
        traversepointer = traversepointer->nextaddress;
        count++;
    }
    if (traversepointer->nextaddress == NULL)
    {
        InsertAtEnd(head, endpointer, datainsert);
        return;
    }
    // create new node for datatoinsert
    Node *nodeInsert = new Node(datainsert);
    nodeInsert->nextaddress = traversepointer->nextaddress;
    traversepointer->nextaddress->prevaddress = nodeInsert;
    traversepointer->nextaddress = nodeInsert;
    nodeInsert->prevaddress = traversepointer;
}
void DeleteNode(int position, Node *&head)
{
    // deletion of first or start node
    if (position == 1)
    {
        Node *deletionnode = head;
        *deletionnode->nextaddress->prevaddress = NULL;
        head = deletionnode->nextaddress;
        deletionnode->nextaddress = NULL;
        // memory free start node
        delete deletionnode;
    }
    // deletion of any middle node or last node
    else
    {
        Node *currentpointer = head;
        Node *previouspointer = NULL;
        int count = 1;
        while (count < position)
        {
            previouspointer = currentpointer;
            currentpointer = currentpointer->nextaddress;
            count++;
        }
        currentpointer->prevaddress = NULL;
        previouspointer->nextaddress = currentpointer->nextaddress;
        currentpointer->nextaddress = NULL;
        delete currentpointer;
    }
}
void PrintLinkedList(Node *&head)
{
    // pointer at head
    Node *traversepointer = head;
    // move forward with this pointer until its NULL
    while (traversepointer != NULL)
    {
        // print the data of the current node
        cout << traversepointer->datainsert << " ";
        // move forward
        traversepointer = traversepointer->nextaddress;
    }
}
int LengthOfLinkedList(Node *head)
{
    int length = 0;
    Node *traversepointer = head;
    while (traversepointer != NULL)
    {
        length++;
        traversepointer = traversepointer->nextaddress;
    }
    return length;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    PrintLinkedList(head);
    LengthOfLinkedList(head);
    return 0;
}
