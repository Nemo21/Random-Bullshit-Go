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
int BubbleSort(int Arr[], int length)
{
    bool flag = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (Arr[i] > Arr[i + 1])
        {
            swap(Arr[i], Arr[i + 1]);
            flag = 1;
        }
        if (flag == 0)
        {
            break;
        }
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
