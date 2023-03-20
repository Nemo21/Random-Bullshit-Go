#include <bits/stdc++.h>
 
using namespace std;
 
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define vt(type)        vector<type>
#define si              set<ll>
 
void solve(){
    char trampsuit;
    string playerone,playertwo;
    cin>>trampsuit>>playerone>>playertwo;
    map<char,int> cardeal={{'6',6},{'7',7},{'8',8},{'9',9},{'T',10},{'J',11},{'Q',12},{'K',13},{'A',14}};
    if(playerone[1]==playertwo[1]&&cardeal[playerone[0]]>cardeal[playertwo[0]]||playerone[1]==trampsuit&&playertwo[1]!=trampsuit)
        cout<<"YES";
    else
        cout<<"NO";
    return ;
}

 
int main(){
    
    int t=1;
 
   
   // cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}