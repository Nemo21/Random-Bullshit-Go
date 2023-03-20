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
int find(double prob){
    return ceil(sqrt(2*365*log(1-(1-prob))));
}
void solve(){
    int n;
    cin>>n;
    string t[2*n];
    int a[26]={0}; //total number of times each char comes
    for(int i=0;i<2*n;i++){
        cin>>t[i];
        for(auto j:t[i]){
            a[j-'a']++; //count of corresponding char
        }
    }
    string s;
    cin>>s;
    for(auto j:s){
        a[j-'a']++;//count of corresponding char
    }
    for(int i=0;i<26;i++){//check for all counts
        if(a[i]%2==1){  //if count odd
            char c= i+'a'; //initial hoga,ascii me add karwado
            cout<<c<<endl; //to cout karwado
            return;
        }
    }
    return ;
}

 
int main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
        //cout << "\n";
    }
    return 0;
}