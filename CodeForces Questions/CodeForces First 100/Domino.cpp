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
    int sumupperdom=0;
    int sumbottomdom=0;
    int countofrotate=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int upperval,lowerval;
        cin>>upperval>>lowerval;
        if(upperval%2!=lowerval%2){
            countofrotate++;
        }
        sumupperdom+=upperval;
        sumbottomdom+=lowerval;
    }
    if(sumupperdom%2==0 && sumbottomdom%2==0){
        cout<<"0"<<"\n";
    }
    else if((sumupperdom%2==sumbottomdom%2) && countofrotate){
        cout<<"1"<<"\n";
    }
    else{
        cout<<"-1"<<"\n";
    }
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