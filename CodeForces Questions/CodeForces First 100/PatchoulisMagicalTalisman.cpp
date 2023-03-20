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
    // //
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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    bool onlyodd = true;
    bool onlyeven = true;
    ll coeven = 0, coodd = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
        {
            onlyeven = false;
            coodd++;
        }
        else
        {
            onlyodd = false;
            coeven++;
        }
    }
    if (onlyodd)
    {
        cout << "0\n";
        return;
    }
    if (coodd != 0) // mixed evven and odd
    {
        cout << n - coodd << endl;
        return;
    }
    ll minimum = LONG_MAX;
    for(int i=0;i<n;i++)
    {
        ll x = 0;
        while (arr[i] % 2 == 0) 
        {
            arr[i] /= 2;
            x++;
        }
        arr[i] = x;
        minimum = min(x,minimum);
    }
    cout <<  minimum+coeven-1 << endl; //kisi ek ko even kara nd then vo odd hogaya then to add even and odd wala thingey
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