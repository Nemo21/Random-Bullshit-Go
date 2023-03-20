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
    // int n,d,t,sum=0,c=0;
    // cin>>n>>d;
    // for(int i=0;i<n;i++){
    //     cin>>t;
    //     if(i<n-1){
    //         sum+=(t+10); //10 because 10min break
    //         c+=2;//2 jokes in that 10 mins break
    //     }
    // }
    //     if(sum<=d){
    //         int num;
    //         num=d-sum; //d is total time of event - sum is for ith songs
    //         c=c+(num/5); //num is the remaining time after all songs are over
    //         cout<<c<<endl;
    //     }
    //     else{
    //         cout<<-1<<endl;
    //     }
    int n,m;
    int counte=0;
    int evenin=0;
    int counto=0;
    int oddin=0;
    int arr[101];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            counte++;
            evenin=i;
        }
        else{
            counto++;
            oddin=i;
        }
    }
    if(counte>counto){
        cout<<oddin+1;
    }
    else{
        cout<<evenin+1;
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