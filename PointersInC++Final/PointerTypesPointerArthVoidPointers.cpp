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
    int a = 1025; // variable of type int
    int *p;       // pointer varaible of type int
    p = &a;       // p stores the address of a
    cout << sizeof(int);
    cout << p;
    cout << *p; // dereferncing i.e this will be the value at address p
    cout << p + 1 << *(p + 1);
    char *p1;
    p1 = (char *)p;
    cout << sizeof(char);
    cout << p1 << *p1;
    cout << p1 + 1 << *(p1 + 1);
    return 0;
}
