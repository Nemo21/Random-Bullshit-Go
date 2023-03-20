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
    int arr[101];
    int temp=INT_MIN;
    int noofdays,numberofkilos;
    cin>>noofdays>>numberofkilos;
    for(int i=0;i<noofdays;i++){//012345
        cin>>arr[i];
    }
    for(int i=0;i<noofdays-1;i++){
        if(arr[i]-arr[i+1]>temp){
            temp=arr[i]-arr[i+1];
        }
    }
    cout<<max(0,temp-numberofkilos);
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