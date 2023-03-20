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
int RemoveZerofromInput(int input){
    string iter=to_string(input),newstorage;
    for(int i=0;i<iter.length();i++){
        if(iter[i]!='0'){
            newstorage.push_back(iter[i]);
        }
    }
    return stoi(newstorage);
}
void solve(){
    int firstint,secondint;
    cin>>firstint>>secondint;
    int initialsum=firstint+secondint;
    firstint=RemoveZerofromInput(firstint);
    secondint=RemoveZerofromInput(secondint);
    initialsum=RemoveZerofromInput(initialsum);
    if(firstint+secondint==initialsum){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return;
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