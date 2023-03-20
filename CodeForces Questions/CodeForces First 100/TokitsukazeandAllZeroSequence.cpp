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
    int no;
    cin>>no;
    vector<int> vec(no);
    set<int> se;
    int nonzero=0;
    bool flag=false;
    for(int i=0;i<no;i++){
        cin>>vec[i];
        if(vec[i]!=0) nonzero++;
        else flag=true;
        se.insert(vec[i]);
    }
    if(flag){
        cout<<nonzero<<endl;
    }
    else{
        if(se.size()<vec.size()){
            cout<<vec.size();
        }
        else{
            cout<<vec.size()+1;
        }
    }
    return;
    // 1 2 3
    // 1 1 3
    // 0 1 3
    //tricky 0 0 3
    //0 0 0
}
 
int main(){
    int t=1;
 
    cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}