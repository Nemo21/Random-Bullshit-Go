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
    string s;
    cin >> s;
    string s1;
    cin >> s1;
    bool flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s1.length(); j++)
        {
            if (s[i] == s1[j])
            {
                cout << i << endl;
                flag = 1;
                break;
            }
        }
    }
    return 0;
}
