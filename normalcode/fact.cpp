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

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
// master theorem
// recursive tree
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
void reverse(node *head)
{
    if (head == NULL)
    {
        return;
    }
    reverse(head->next);
    cout << head->data << " ";
}

int main()
{
    return 0;
}
/*
reverse a linked list.
find the loop in a linked list.
sort a given linked list.
capitalise a linked list.
find subsequences in a linked list.

*/