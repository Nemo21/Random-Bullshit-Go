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

int lengt(Node *head)
{
    int length = 0;
    while (head != NULL)
    {
        length++;
        head = head->nextaddress;
    }
    return length;
}
// Less Optimised Solution
Node *findMiddle(Node *head)
{
    int length = lengt(head);
    int ans = (length / 2);
    Node *temp = head;
    int count = 0;
    while (count < ans)
    {
        temp = temp->nextaddress;
        count++;
    }
    return temp;
}
// Optimised Solution
Node *getMiddle(Node *head)
{
    // case of when one or two elements in LL
    if (head == NULL || head->nextaddress == NULL)
    {
        return head;
    }
    // case of when there are three elements?
    if (head->nextaddress->nextaddress == NULL)
    {
        return head->nextaddress;
    }
    // slow fast pointer approach
    Node *slowpointer = head;
    Node *fastpointer = head->nextaddress;
    while (fastpointer != NULL)
    { // move fast pointer twice at speed as slow pointer
        fastpointer = fastpointer->nextaddress;
        if (fastpointer != NULL)
        {
            fastpointer = fastpointer->nextaddress;
        }
        slowpointer = slowpointer->nextaddress;
    }
    return slowpointer;
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
