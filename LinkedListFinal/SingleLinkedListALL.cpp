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

void InsertionAtHead(Node *&head, int datainsert)
{
    // here function parameter in head is taken reference to avoid creating a copy
    // whenever new node comes, we first create that new node
    Node *newnode1 = new Node(datainsert);
    // when new node is created its address is pointing to NULL, so we change that to address of head
    newnode1->nextaddress = head;
    // now since we know that head always points to first node,so we change head to the first node that is newnode1
    head = newnode1;
}
void InsertAtEnd(Node *&endpointer, int datainsert)
{
    // 1->2->3->NULL            4->NULL
    // 1->2->3->4->NULL
    Node *newnode1 = new Node(datainsert);
    // address of previous node now points to the newly added node
    endpointer->nextaddress = newnode1;
    // endpointer would always point to the last node so we change endpointer to address of lastnode
    endpointer = newnode1->nextaddress;
}
void InsertAtSomePosition(Node *&endpointer, Node *&head, int position, int datainsert)
{
    // means it is the case of insertion at head
    if (position == 1)
    {
        InsertionAtHead(head, datainsert);
        return;
    }
    Node *traversepointer = head; // start from head
    int count = 1;                // keep count at 1 because currently pointing to head
    while (count < position - 1)  // while count is 1 one less than position,move forward
    {
        traversepointer = traversepointer->nextaddress; // move traverse pointer to next address
        count++;                                        // and increment count to keep validity of the while loop
    }
    // means it is the case of insertion at end
    if (traversepointer->nextaddress == NULL)
    {
        InsertAtEnd(endpointer, datainsert);
        return;
    }
    // here actually changes of links takes place
    //  create new node for datatoinsert
    Node *nodeInsert = new Node(datainsert);
    nodeInsert->nextaddress = traversepointer->nextaddress;
    traversepointer->nextaddress = nodeInsert;
}
void DeleteNode(int position, Node *&head)
{
    // deletion of first or start node
    if (position == 1)
    {
        // deletionnode is head move head to next of the deletion and point it to null
        Node *deletionnode = head;
        head = head->nextaddress;
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
            previouspointer = currentpointer;             // move prev pointer to position of current pointer
            currentpointer = currentpointer->nextaddress; // move current pointer to next node
            count++;                                      // increment count
        }
        previouspointer->nextaddress = currentpointer->nextaddress; // move prec pointer to position of current pointer
        currentpointer->nextaddress = NULL;                         // isolate the current pointer
        delete currentpointer;                                      // memory free middle or last node
    }
}
void PrintLinkedList(Node *&head)
{
    // pointer at head
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    Node *traversepointer = head;
    // move forward with this pointer until its NULL
    while (traversepointer != NULL)
    {
        // print the data of the current node
        cout << traversepointer->data << " ";
        // move forward
        traversepointer = traversepointer->nextaddress;
    }
}
int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->nextaddress << endl;
    Node *head = node1;
    Node *endpointer = node1;
    PrintLinkedList(head);
    InsertionAtHead(head, 12);
    PrintLinkedList(head);
    InsertionAtHead(endpointer, 15);

    return 0;
}
