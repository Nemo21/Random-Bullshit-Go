#include <bits/stdc++.h>
#include<vector>
 
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
    vector<int> negative,positive,zero;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0){
            zero.push_back(a);
        }
        if(a>0){
            positive.push_back(a);
        }
        if(a<0){
            negative.push_back(a);
        }
    }
    if(positive.size()==0){
        for(int i=0;i<2;i++){
            positive.push_back(negative.back()),negative.pop_back();
        }
    }
    if(negative.size()%2==0){
        zero.push_back(negative.back());
        negative.pop_back();
    }
    printf("\n%d",negative.size());
    for(int i=0;i<negative.size();i++){
        printf(" %d",negative[i]);
    }
    printf("\n%d",positive.size());
    for(int i=0;i<positive.size();i++){
        printf(" %d",positive[i]);
    }
    printf("\n%d",zero.size());
    for(int i=0;i<zero.size();i++){
        printf(" %d",zero[i]);
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