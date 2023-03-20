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
int getLength(Node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->nextaddress;
    }
    return count;
}
// this is the one used in leetcode one
Node *KreverseLinkedList(Node *head, int K, int length)
{
    // empty linked list case this is base case
    if (length < K)
    {
        return head;
    }
    // Reverse fist K nodes
    Node *nextaddress = NULL;
    Node *current = head;
    Node *previousaddress = NULL;
    int count = 0;
    // its like a sliding window approach and till we reach the end of the linked list
    while (current != NULL && count < K)
    {
        // move pointers and increment count till it reaches kth element
        nextaddress = current->nextaddress;
        current->nextaddress = previousaddress;
        previousaddress = current;
        current = nextaddress;
        count++;
    }
    // reccursively solving for the rest of the linked list
    if (nextaddress != NULL)
    {
        head->nextaddress = KreverseLinkedList(nextaddress, K, length - K);
    }
    // return the head of the reverse linked list that is previousaddress in this case
    return previousaddress;
}
// Iterative Solution for Reversing a Linked List
Node *KreverseLinkedList(Node *head, int K)
{
    // empty linked list case this is base case
    if (head == NULL)
    {
        return NULL;
    }
    // Reverse fist K nodes
    Node *nextaddress = NULL;
    Node *current = head;
    Node *previousaddress = NULL;
    int count = 0;
    // its like a sliding window approach and till we reach the end of the linked list
    while (current != NULL && count < K)
    {
        // move pointers and increment count till it reaches kth element
        nextaddress = current->nextaddress;
        current->nextaddress = previousaddress;
        previousaddress = current;
        current = nextaddress;
        count++;
    }
    // reccursively solving for the rest of the linked list
    if (nextaddress != NULL)
    {
        head->nextaddress = KreverseLinkedList(nextaddress, K);
    }
    // return the head of the reverse linked list that is previousaddress in this case
    return previousaddress;
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
