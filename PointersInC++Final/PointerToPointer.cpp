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
    int x = 5;   // 225
    int *p = &x; // value 225 add:215
    *p = 6;
    int **q = &p;  // value 215 ,add:205
    int ***r = &q; // value 205
    cout << *p;
    cout << *q;
    cout << *(*q);
    cout << *(*(*r));
    *(*(*r)) = 10;
    cout << x;
    **q = *p + 2;
    cout << x;
    return 0;
}
