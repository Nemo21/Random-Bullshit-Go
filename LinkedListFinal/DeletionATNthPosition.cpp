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

void Delete(int n)
{
    Node *firstnode = head;
    if (n == 1)
    {
        head = firstnode->next;
        free(firstnode);
    }
    int i;
    for (i = 0; i < n - 2; i++)
    {
        firstnode = firstnode->next;
    }
    Node *secondnode = firstnode->next;
    firstnode->next = secondnode->next;
    free(secondnode);
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
