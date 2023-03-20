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
    int a;  // variable of type int
    int *p; // pointer varaible of type int
    a = 10;
    p = &a;    // p stores the address of a
    cout << a; // this is 10
    cout << p;
    cout << *p; // dereferncing i.e this will be the value at address p
    *p = 12;    // value at address p should now be 12 which is a
    // a=12 now
    cout << a;
    cout << &a; // address of a
    int b = 20;
    *p = b;
    cout << p;        // 204
    cout << *p;       // 20
    cout << p + 1;    // 208
    cout << *(p + 1); // garbage value return because explicitely *(p+1) not define
    return 0;
}
