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
    int n;
    cin>>n;
    int array[100+10];
    for(int worm1=0;worm1<n;++worm1){
        cin>>array[worm1];
    }
    for(int worm1=0;worm1<n;worm1++){
        for(int worm2=0;worm2<n;++worm2){
            for(int worm3=0;worm3<n;++worm3){
                if(worm1!=worm2 && worm2!=worm3 && worm1!=worm3 && array[worm1]==array[worm2]+array[worm3]){
                    cout<<worm1+1<<" "<<worm2+1<<" "<<worm3+1;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
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