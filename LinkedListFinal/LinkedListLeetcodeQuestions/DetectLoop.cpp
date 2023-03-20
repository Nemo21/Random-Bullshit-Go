#include <bits/stdc++.h>
#include <vector>
#include <map>
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

bool DetectLoop(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> Visited;
    Node *temp = head;
    while (temp != NULL)
    {
        // cycle is present
        if (Visited[temp] == true)
        {
            return true;
        }
        Visited[temp] = true;
        temp = temp->nextaddress;
    }
    return false;
}
Node *FloydCycleDetect(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->nextaddress;
        if (fast != NULL)
        {
            fast = fast->nextaddress;
        }
        slow = slow->nextaddress;
        if (slow == fast)
        {
            cout << "Loop present at data " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}
Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *InterSection = FloydCycleDetect(head);
    if (InterSection == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    while (slow != InterSection)
    {
        slow = slow->nextaddress;
        InterSection = InterSection->nextaddress;
    }
    return slow;
}
Node *RemoveLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *startnode = getStartingNode(head);
    if (startnode == NULL)
    {
        return head;
    }
    Node *temp = startnode;
    while (temp->nextaddress != startnode)
    {
        temp = temp->nextaddress;
    }
    temp->nextaddress = NULL;
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