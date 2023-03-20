#include <bits/stdc++.h>
#include <vector>
#include <stack>
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
void MaxAReaOfHistogram(int price[], int n, int Span[])
{
    Span[0] = 1;
    for (int i = 1; i < n; i++)
    {
        Span[i] = 1;
        for (int j = i - 1; (j >= 0) && (price[i] >= price[j]); j--)
        {
            Span[i]++;
        }
    }
}
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int price[n];
        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }
        int Span[n];
        MaxAReaOfHistogram(price, n, Span);
        cout << "Calculated Span values" << endl;
        PrintArray(Span, n);
    }
    return 0;
}
