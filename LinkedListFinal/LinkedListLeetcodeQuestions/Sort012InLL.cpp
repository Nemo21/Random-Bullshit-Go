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
void insertattail(Node *&tail, Node *current)
{
    tail->nextaddress = current;
    tail = current;
}
Node *Sort012alt(Node *head)
{
    // dummy node for 0 data
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;
    // dummy node for 1 data
    Node *onehead = new Node(-1);
    Node *onetail = onehead;
    // dummy node for 2 data
    Node *twohead = new Node(-1);
    Node *twotail = twohead;
    // for iteration pointer
    Node *current = head;
    while (current != NULL)
    {
        int value = current->data;
        // create linked list with all 0
        if (value == 0)
        {
            insertattail(zerotail, current);
        }
        // create linked list with all 1
        else if (value == 1)
        {
            insertattail(onetail, current);
        }
        // create linked with all 2
        else if (value == 2)
        {
            insertattail(twotail, current);
        }
        current = current->nextaddress;
    }
    // here we are merging with 0,1,2
    if (onehead->nextaddress != NULL)
    {
        // here connecting zero linked list with one linked list
        zerotail->nextaddress = onehead->nextaddress;
    }
    else
    {
        // here connecting zero linked list with two linked list , this is the case for when there is no element in one data linked list
        zerotail->nextaddress = twohead->nextaddress;
    }
    // connecting point for 0 tail with 1 head and 1 tail with 2 head
    onetail->nextaddress = twohead->nextaddress;
    twotail->nextaddress = NULL;
    head = zerohead->nextaddress;
    // delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
}
Node *Sort012(Node *head)
{
    int zerocount = 0, onecount = 0, twocount = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zerocount++;
        }
        else if (temp->data == 1)
        {
            onecount++;
        }
        else if (temp->data == 2)
        {
            twocount++;
        }
        temp = temp->nextaddress;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zerocount != 0)
        {
            temp->data = 0;
            zerocount--;
        }
        else if (onecount != 0)
        {
            temp->data = 1;
            onecount--;
        }
        else if (twocount != 0)
        {
            temp->data = 2;
            twocount--;
        }
        temp = temp->nextaddress;
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
