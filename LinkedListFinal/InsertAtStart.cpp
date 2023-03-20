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

void InsertAtStart(int x)
{
    // 1->2->3->NULL   isolated 0->NULL
    // 0->1->2->3->NULL
    Node *firstnode = new Node();
    firstnode->data = x;
    firstnode->next - NULL;
    if (head != NULL)
    {
        firstnode->next = head;
    }
    head = firstnode;
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
/*
array given size anything(n)
digits three times repititon
find unique element





int n;
cin>>n;
int fina[N];
int arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
    fina[arr[n]++];
}

for(int i=0;i<n;i++)
{
    if(fina[arr[i]]==1)
    {
        cout<<arr[i];
    }
}









*/