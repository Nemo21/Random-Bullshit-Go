#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n>>m;
    for (int i = 1; i <= m; ++i) {
        cout<< n * i << endl;
    }
   return 0;
}