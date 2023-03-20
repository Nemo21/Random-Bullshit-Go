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
    int n,chest,biceps,back,i,noofele;
    cin>>n;
    chest=biceps=back=0;
    for(int i=1;i<=n;i++){
        cin>>noofele;
        if(i%3==1){
            chest+=noofele;
        }
        if(i%3==2){
            biceps+=noofele;
        }
        if(i%3==0){
            back+=noofele;
        }
    }
    if(chest>=biceps && chest>=back){
        cout<<"chest";
    }
    else if(biceps>=chest && biceps>=back){
        cout<<"biceps";
    }
    else{
        cout<<"back";
    }

}

 
int main(){
    
    int t=1;
 
   
    //cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}