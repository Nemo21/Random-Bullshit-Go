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
    // int NumofCoins;
    // int T1numofcoins=0;
    // int T1sumofcoins=0;
    // int T2numofcoins=0;
    // int T2sumofcoins=0;
    // cin>>NumofCoins;
    // vector<int> values(NumofCoins);
    // for(int i=0;i<values.size();i++){
    //     cin>>values[i];
    // }
    // sort(values.begin(),values.end(),greater<int>());

    // for(int i=0;i<values.size();i++){
    //     if(i%2==0){
    //         //t1 number of coins++;
    //         T1numofcoins++;
    //         T1sumofcoins += values[i];

    //     }
    //     else{
    //         T2numofcoins++;
    //         T2sumofcoins+=values[i];
    //         //t2 number of coins++;
    //     }

    //     // cout << T1sumofcoins << " " << T2sumofcoins << "\n";
    // }
    // if(T1sumofcoins==T2sumofcoins){
    //     T1numofcoins++;
    // }
    // cout<<T1numofcoins;

    int n;
    int answer=0;
    cin >> n;
    vector<int> a(n);
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum2+=a[i];
    }
    // cout << 1;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++){
        sum1+=a[i];
        sum2-=a[i];
        if(sum1>sum2){
            answer=i+1;
            break;
        }
    }

    // cout << sum1 << " " << sum2 << '\n';
    cout<<answer;

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