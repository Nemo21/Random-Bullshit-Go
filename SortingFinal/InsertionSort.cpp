#include <bits/stdc++.h>
#include <vector>

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
int InsertionSort(int Arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int value = Arr[i];
        int hole = i - 1;
        while (hole > 0 && Arr[hole] > value)
        {
            Arr[hole + 1] = Arr[hole];
            hole = hole - 1;
        }
        Arr[hole + 1] = value;
    }
    return 0;
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
