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

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int countsmall = 0;
        int countlarge = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] <= x)
            {
                countsmall++;
            }
            else
            {
                countlarge++;
            }
        }
        cout << "Larger " << countlarge << endl;
        cout << "smaller " << countsmall << endl;
    }
    return 0;
}
