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
void reversestring(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
}
void solve(){
    int len;
    cin>>len;
    string s;
    cin>>s;
    vector<int>position;
    for(int i=0;i<len;i++){
        int j=i;
        while(j<len && s[i]==s[j]){
            j++;
        }
        position.push_back(j-i);
        j--;
        i=j;
    }
    int l=0;
    int r=position.size();
    int mid=(l+r)/2;
    cout<<position[mid];
    return ;
    
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