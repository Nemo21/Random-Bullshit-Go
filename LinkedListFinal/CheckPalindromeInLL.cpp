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
// another method for the same question
bool IsPalindrome(Node *head)
{
    if (head->nextaddress == NULL)
    {
        return true;
    }
    Node *middle = getMiddle(head);
    Node *temp = middle->nextaddress;
    middle->nextaddress = reverseLinkedList(temp);
    Node *head1 = head;
    Node *head2 = middle->nextaddress;
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->nextaddress;
        head2 = head2->nextaddress;
    }
    Node *temp = middle->nextaddress;
    middle->nextaddress = reverseLinkedList(temp);
    return true;
}
bool CheckPalindrome(vector<int> arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
bool IsPalindrome(Node *head)
{
    vector<int> arra;
    Node *temp = head;
    while (temp != NULL)
    {
        arra.push_back(temp->data);
        temp = temp->nextaddress;
    }
    return CheckPalindrome(arra);
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
