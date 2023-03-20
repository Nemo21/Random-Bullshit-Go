#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int x,m,d;
        cin>>x>>m>>d;
        cout<<min(x*m,x+d)<<endl;
    }
    return 0;
}