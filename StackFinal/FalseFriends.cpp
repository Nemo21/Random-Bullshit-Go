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
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int delet = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1 && arr[i] < arr[i - 1] && delet < k)
            {
                delet++;
                continue;
            }
            result.push_back(arr[i]);
        }
        result.resize(n - k);
        result.shrink_to_fit();
        for (auto i = result.begin(); i != result.end(); i++)
        {
            cout << *i << " ";
        }
        cout << "\n";
    }
    return 0;
}
