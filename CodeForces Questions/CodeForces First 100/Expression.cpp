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
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    int e1=(a+b)*c;
    int e2=a*(b+c);
    int e3=a*b*c;
    int e4=(a+b)*c;
    int e5=a+b+c;
    int e6=(a*b)+c;
    int arr[6]={e1,e2,e3,e4,e5,e6};
    sort(arr,arr+6);
    cout<<arr[5];
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