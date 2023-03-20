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
void insertAtTail(Node *head, Node *tail, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->nextaddress = temp;
        tail = temp;
    }
}
Node *Add(Node *first, Node *second)
{
    int carry = 0;
    Node *anshead = NULL;
    Node *anstail = NULL;
    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;
        insertAtTail(anshead, anstail, digit);
        carry = sum / 10;
        first = first->nextaddress;
        second = second->nextaddress;
    }
    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        insertAtTail(anshead, anstail, digit);
        carry = sum / 10;
        first = first->nextaddress;
    }
    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;
        insertAtTail(anshead, anstail, digit);
        carry = sum / 10;
        second = second->nextaddress;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        insertAtTail(anshead, anstail, digit);
        carry = sum / 10;
    }
    return anshead;
}
// alternate
Node *AddNumbers(Node *first, Node *second)
{
    int carry = 0;
    Node *anshead = NULL;
    Node *anstail = NULL;
    while (first != NULL || second != NULL || carry != 0)
    {
        int firstvalue;
        if (first != NULL)
        {
            firstvalue = first->data;
        }
        int secondvalue;
        if (second != NULL)
        {
            secondvalue = second->data;
        }
        int sum = carry + firstvalue + secondvalue;
        int digit = sum % 10;
        insertAtTail(anshead, anstail, digit);
        carry = sum / 10;
        if (first != NULL)
        {
            first = first->nextaddress;
        }
        if (second != NULL)
        {
            second = second->nextaddress;
        }
    }
    return anshead;
}
Node *AddTwoLists(Node *first, Node *second)
{
    // first we reverse both linked lists
    first = reverseLinkedList(first);
    second = reverseLinkedList(second);
    // then perform add operation with the alternate one
    Node *ans = Add(first, second); // then reverse it again
    ans = reverseLinkedList(ans);
    return ans;
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
