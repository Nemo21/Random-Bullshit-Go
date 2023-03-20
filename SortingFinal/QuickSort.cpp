#include <bits/stdc++.h>
#include <vector>
#include <array>
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
int Partition(vector<int> &Arr, int start, int end)
{
    int pivot = Arr[end];
    int PivotIndex = start;
    for (int i = start; i < end; i++)
    {
        if (Arr[i] <= pivot)
        {
            swap(Arr[i], Arr[PivotIndex]);
            PivotIndex++;
        }
    }
    swap(Arr[PivotIndex], Arr[end]);
    return PivotIndex;
}
void QuickSort(vector<int> &Arr, int start, int end)
{
    if (start < end)
    {
        int PivotIndex = Partition(Arr, start, end);
        QuickSort(Arr, end, PivotIndex - 1);
        QuickSort(Arr, PivotIndex + 1, end);
    }
    return;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    QuickSort(arr, 0, n - 1);
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
