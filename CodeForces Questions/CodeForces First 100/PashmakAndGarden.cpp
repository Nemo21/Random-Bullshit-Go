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
    int x3,y3,x4,y4;
    int x1,y1,x2,y2;
    bool ok=1;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        ll side=abs(y2-y1);
        x3=x1+side;
        x4=x2+side;
        y3=y1;
        y4=y2;
    }
    else if(y1==y2){
        ll side=abs(x2-x1);
        x3=x1;
        x4=x2;
        y3=y1+side;
        y4=y2+side;
    }
    else if(abs(x2-x1)==abs(y2-y1)){
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
    }
    else{
        ok=0;
    }
    if(ok==0){
        cout<<-1;
        return ;
    }
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
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