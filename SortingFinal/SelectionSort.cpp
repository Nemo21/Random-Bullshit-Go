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
int SelectionSort(int Arr[], int length)
{
    int temp;
    for (int i = 0; i < length - 1; i++)
    {
        int Imin = i;
        for (int j = j + 1; j < length; j++)
        {
            if (Arr[j] < Arr[Imin])
            {
                Imin = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[Imin];
        Arr[Imin] = Arr[temp];
    }
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
k contains some number
n number of elements
A is the array input of length n
1 2 3 4 5 6 7 8 10
k=3
n=10
diff=10-1=9(non negative)
to do
with k added or subtracted from these 6
min(maxelemt-minelemt)
*/

/*
    int n;
    int k;
    cin >> n;
    cin >> k;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    sort(Arr, Arr + n);

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] >= k)
        {
            Arr[i] = Arr[i] - k;
        }
        else
        {
            Arr[i] = Arr[i] + k;
        }
    }
    sort(Arr, Arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
    cout << Arr[n - 1] - Arr[0];

*/