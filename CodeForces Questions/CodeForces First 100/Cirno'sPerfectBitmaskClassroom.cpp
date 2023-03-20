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
    // ll x;
    // cin>>x;
    // vector<ll> setbitposition;
    // ll position=0,temp=x; //x ka use mat karna directly
    // while(temp){
    //     if(temp&1){ //where set bit
    //         setbitposition.push_back(position); //position of set bit in x
    //     }
    //     temp>>=1;
    //     position++;
    // }
    // if(setbitposition[0]==0){ //agar setbit on position 0
    //     if(x==1){ //01,10 2**0+2**1=3
    //         cout<<3<<endl;
    //     }
    //     else{ //aage kahi set bit to 1 kardo
    //         cout<<1<<endl;
    //     }
    // }
    // else{ // 1___ konse position on 2**position agar aage kahi to 0 kardo
    //     ll temp1=pow(2,setbitposition[0]);
    //     if(setbitposition.size()>1){ //one more set bit,baaki saare 0
    //         cout<<temp1<<endl;
    //     }
    //     else{//set first bit set 
    //         cout<<temp1+1<<endl;
    //     }
    // }
    ll x;
    cin>>x;
    if(x==1){
        cout<<3;
        return;
    }
    if(x&(x-1)==0){
        cout<<(x+1);
        return;
    }
    cout<<(1<<__builtin_ctzll(x));
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