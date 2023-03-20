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
    Node *random;
    // constructor for making linked list
    Node(int data)
    {
        this->data = data;        // input data
        this->nextaddress = NULL; // created an isolated node
        this->random = NULL;
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
void InsertAtTail(Node *head, Node *tail, int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else
    {
        tail->nextaddress = newnode;
        tail = newnode;
    }
}
Node *CopyALinkedList(Node *head)
{
    Node *clonehead = NULL;
    Node *clonetail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        InsertAtTail(clonehead, clonetail, temp->data);
        temp = temp->nextaddress;
    }

    unordered_map<Node *, Node *> OldToNew;
    Node *oldnode = head;
    Node *clonenode = clonehead;
    while (oldnode != NULL && clonenode != NULL)
    {
        OldToNew[oldnode] = clonenode;
        oldnode = oldnode->nextaddress;
        clonenode = clonenode->nextaddress;
    }
    oldnode = head;
    clonenode = clonehead;

    while (oldnode != NULL)
    {
        clonenode->random = OldToNew[oldnode->random];
        oldnode = oldnode->nextaddress;
        clonenode = clonenode->nextaddress;
    }
    return clonehead;
}
// Optimised Approach

Node *CopyALL(Node *head)
{
    Node *clonehead = NULL;
    Node *clonetail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        InsertAtTail(clonehead, clonetail, temp->data);
        temp = temp->nextaddress;
    }
    Node *originalNode = head;
    Node *cloneNode = clonehead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *next = originalNode->nextaddress;
        originalNode->nextaddress = cloneNode;
        originalNode = next;
        next = cloneNode->nextaddress;
        cloneNode->nextaddress = originalNode;
        cloneNode = next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (temp->nextaddress != NULL)
        {
            if (temp->random != NULL)
            {
                temp->nextaddress->random = temp->random->nextaddress;
            }
            else
            {
                temp->nextaddress = temp->random;
            }
        }
        else
        {
            temp = temp->nextaddress->nextaddress;
        }
    }
    originalNode = head;
    cloneNode = clonehead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        originalNode->nextaddress = cloneNode->nextaddress;
        originalNode = originalNode->nextaddress;
        if (originalNode != NULL)
        {
            cloneNode->nextaddress = originalNode->nextaddress;
        }
        cloneNode = cloneNode->nextaddress;
    }
    return clonehead;
}
void PrintLinkedList(Node *&head)
{
    // pointer at head
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
    return 0;
}
