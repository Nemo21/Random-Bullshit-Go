#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *create(int x);
node *insertatend(node *head,int data);
void display(node *head);
int main()
{
    node *head=NULL;
    head=insertatend(head,10);
    return 0;
}
node *create(int x)
{
    node *np=new node(); 
    np->data=x;
    np->next=NULL;
    return np;
}
node *insertatend(node *head,int data)
{
    node *nptr=create(data);
    if(!head)
    {
        head=nptr;
        return head;
    }
    node *t=head;
    while(t->next)
    {   
        t=t->next;
    }
    t->next=nptr;
    return head;
}
void display(node *head)
{
    if(!head)
    {   

        return ;
    }
    while(head) {
        cout<<head->data;
        head=head->next;
    }
}
