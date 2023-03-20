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
    // // ye koi aur question hai
    // ll n;
    // cin>>n;
    // vector<ll> arr(n);
    // bool odd=true;
    // bool even=true;
    // ll counteven=0,countodd=0;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    //     if(arr[i]%2){
    //         even=false; //sirf even numbers
    //         countodd++;
    //     }
    //     else{ //sirf odd honge numbers
    //         odd=false;
    //         counteven++;
    //     }
    // }
    // if(odd){ // sirf odd because no need
    //     cout<<0<<"\n";
    //     return;
    // }
    // if(countodd!=0){ //array contains both even and odd elements
    //     cout<<n-countodd<<endl;
    //     return;
    // }
    // ll minimum=LONG_MAX;
    // for(int i=0;i<n;i++){
    //     ll x=0;
    //     while(arr[i]%2==0){ //sabko reduce karke with minimum operations
    //         arr[i]/=2;
    //         x++;
    //     }
    //     arr[i]=x;
    //     minimum=min(x,minimum);
    // }
    // cout<<minimum+even-1<<endl; //kisi ek ko even kara nd then vo odd hogaya then to add even and odd wala thingey 
    // return ;
    ll arraysi,window;
    cin>>arraysi>>window;
    string s;
    cin>>s;
    ll white=0,black=0;
    for( ll i=0;i<window;i++){
        if(s[i]=='B'){
            black++;
        }
        else{
            white++;
        }
    }
    ll answer=white;
    for(ll i=window;i<arraysi;i++){
        if(s[i]=='B'){
            black++;
        }
        else{
            white++;
        }
        if(s[i-window]=='B'){
            black--;
        }
        else{
            white--;
        }
        answer=min(answer,white);
    }
    cout<<answer;

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