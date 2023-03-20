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

// Iterative Solution for Reversing a Linked List
Node *reverseLinkedList(Node *head)
{
    // case of when LL has 0 or one element
    if (head == NULL || head->nextaddress == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *current = head;
    Node *forward = NULL;
    while (current != NULL)
    {
        // current and forward would point the same node
        // whereas prev would point one before these nodes
        forward = current->nextaddress;
        current->nextaddress = prev;
        prev = current;
        current = forward;
    }
    // return the head of the reversed LL which is prev
    return prev;
}
Node *ReverseLinkedList(Node *&head, Node *current, Node *prev)
{
    if (current == NULL)
    {
        head = prev;
        return head;
    }
    Node *forward = current->nextaddress;
    ReverseLinkedList(head, forward, current);
    current->nextaddress = prev;
}
Node *ReverseLL(Node *head)
{
    if (head == NULL || head->nextaddress == NULL)
    {
        return head;
    }
    Node *subhead = ReverseLL(head->nextaddress);
    head->nextaddress->nextaddress = head;
    head->nextaddress = NULL;
    return subhead;
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
