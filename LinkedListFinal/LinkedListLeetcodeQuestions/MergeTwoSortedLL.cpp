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
Node *solve(Node *first, Node *second)
{
    if (first->nextaddress == NULL)
    {
        first->nextaddress = second;
        return first;
    }
    Node *current1 = first;
    Node *next1 = current1->nextaddress;
    Node *current2 = second;
    while (next1 != NULL && current2 != NULL)
    {
        if (current2->data >= current1->data && current2->data <= next1->data)
        {
            current1->nextaddress = current2;
            Node *next2 = current2->nextaddress;
            current2->nextaddress = next1;
            current1 = current2;
            current2 = next2;
        }
        else
        {
            current1 = next1;
            next1 = next1->nextaddress;
            if (next1 == NULL)
            {
                current1->nextaddress = current2;
                return first;
            }
        }
    }
    return first;
}
Node *sortTwoLists(Node *first, Node *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
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
        cout << traversepointer->data << " ";
        // move forward
        traversepointer = traversepointer->nextaddress;
    }
}
int main()
{
    return 0;
}
