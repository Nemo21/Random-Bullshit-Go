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

struct Node
{
    int data;
    Node *next;
};

struct Node *head;

void InsertAtNthPosition(int data, int position)
{
    Node *nthnode = new Node();
    nthnode->data = data;
    nthnode->next = NULL;
    if (position == 1)
    {
        nthnode->next = head;
        head = nthnode;
        return;
    }
    Node *othernthnode = head;
    for (int i = 0; i < position - 1; i++)
    {
        othernthnode = othernthnode->next;
    }
    nthnode->next = othernthnode->next;
    othernthnode->next = nthnode;
}
void PrintLL()
{
    struct Node *firstnode = head;
    while (firstnode != NULL)
    {
        cout << firstnode->data;
        firstnode = firstnode->next;
    }
    cout << "\n";
}

void solve()
{
    return;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
