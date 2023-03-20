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
    int num;
    cin>>num;
    int a[num];
    int answer=0;
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=0;i<num;i++){
        for(int j=i;j<num;j++){
            answer+=(j-i+1);
            for(int k=i;k<=j;k++){
                if(a[k]==0){
                    answer++;
                }
            }
        }
    }
    cout<<answer<<endl;
    return ;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
       // cout << "\n";
    }
    return 0;
}