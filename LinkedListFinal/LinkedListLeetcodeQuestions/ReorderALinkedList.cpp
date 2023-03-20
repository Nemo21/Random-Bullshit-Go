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
void ReOrderLL(Node *head)
{
    Node *slow = head;
    Node *fast = head->nextaddress;
    while (fast != NULL && fast->nextaddress != NULL)
    {
        slow = slow->nextaddress;
        fast = fast->nextaddress->nextaddress;
    }
    Node *second = slow->nextaddress;
    Node *prev = NULL;
    slow->nextaddress = NULL;
    while (second != NULL)
    {
        Node *temp = second->nextaddress;
        second->nextaddress = prev;
        prev = second;
        second = temp;
    }
    Node *first = head;
    second = prev;
    while (second != NULL)
    {
        Node *temp1 = first->nextaddress;
        Node *temp2 = second->nextaddress;
        first->nextaddress = second;
        second->nextaddress = temp1;
        first = temp1;
        second = temp2;
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
