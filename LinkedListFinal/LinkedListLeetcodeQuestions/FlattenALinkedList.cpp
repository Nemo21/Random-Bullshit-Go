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
    Node *ans = new Node(-1);
    Node *temp = ans;
    while (first != NULL && second != NULL)
    {
        if (first->data < second->data)
        {
            temp->nextaddress = first;
            temp = first;
            first = first->nextaddress;
        }
        else
        {
            temp->nextaddress = second;
            temp = second;
            second = second->nextaddress;
        }
    }
    while (first != NULL)
    {
        temp->nextaddress = first;
        temp = first;
        first = first->nextaddress;
    }
    while (second != NULL)
    {
        temp->nextaddress = second;
        temp = second;
        second = second->nextaddress;
    }
    ans = ans->nextaddress;
    return ans;
}
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
Node *mergeSort(Node *head)
{
    if (head == NULL || head->nextaddress == NULL)
    {
        return head;
    }
    Node *middle = getMiddle(head);
    Node *left = head;
    Node *right = middle->nextaddress;
    middle->nextaddress = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    Node *result = sortTwoLists(left, right);
    return result;
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
