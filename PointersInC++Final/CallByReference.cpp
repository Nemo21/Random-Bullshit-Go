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
// call by value
//  void Increment(int a) // 10
//  {
//      a = a + 1; // 11
//  }

void Increment(int *p)
{
    *p = (*p) + 1; // value at 205=10, 10+1=11
}

int main()
{
    int a = 10;    // 205
    Increment(&a); // 205
    cout << a;     // 11

    return 0;
}
