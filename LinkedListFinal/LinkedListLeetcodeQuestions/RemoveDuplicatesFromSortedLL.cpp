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
Node *UniqueFromSortedLL(Node *head)
{
    // empty LL
    if (head == NULL)
    {
        return NULL;
    }
    // non empty LL
    Node *current = head;
    while (current != NULL)
    {
        if (current->nextaddress != NULL && current->data == current->nextaddress->data)
        {
            Node *nextnode = current->nextaddress->nextaddress;
            Node *todelete = current->nextaddress;
            delete todelete;
            current->nextaddress = nextnode;
        }
        else
        {
            current = current->nextaddress;
        }
    }
    return head;
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
