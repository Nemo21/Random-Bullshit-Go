#include <bits/stdc++.h>

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

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;                       // beginning of array
    int end = size - 1;                  // end of the array
    int mid = start + (end - start) / 2; // mid point of the array
    // this formula better to solve issues regarding integer range
    // run loop till start is at the left and end is at right and dont cross each other
    while (start <= end)
    {
        // key is equal to mid element
        if (arr[mid] == key)
        {
            return mid;
            // simply return index
        }
        if (arr[mid] < key)
        {
            // then go to right part of mid array
            start = mid + 1;
        }
        else
        {
            // go to left part of mid array
            end = mid - 1;
        }
        // change value of mid because either way start and end is varying
        mid = start + (end - start) / 2;
    }
    // return -1 if element is not found
    return -1;
}

void solve()
{
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}