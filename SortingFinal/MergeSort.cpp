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
void Merge(int Arr[], int L[], int leftlength, int R[], int rightlength)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < leftlength && j < rightlength)
    {
        if (L[i] < R[j])
        {
            Arr[k++] = L[i++];
        }
        else
        {
            Arr[k++] = R[j++];
        }
    }
    while (i < leftlength)
    {
        Arr[k++] = L[i++];
    }
    while (j < rightlength)
    {
        Arr[k++] = R[j++];
    }
}
void MergeSort(int Arr[], int length)
{
    int mid, i, *L, *R;
    if (length < 2)
    {
        return;
    }
    mid = length / 2;
    L = (int *)malloc(mid * sizeof(int));
    R = (int *)malloc((length - mid) * sizeof(int));
    for (int i = 0; i < mid; i++)
    {
        L[i] = Arr[i];
    }
    for (i = mid; i < length; i++)
    {
        R[i - mid] = Arr[i];
    }
    MergeSort(L, mid);
    MergeSort(R, length - mid);
    Merge(Arr, L, mid, R, length - mid);
    free(L);
    free(R);
    return;
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
