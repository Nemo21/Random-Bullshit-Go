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
    string another=to_string(n);
    int count1=0;
    if(count(another.begin(),another.end(),'8')!=0){ //count not 0 , 8 count ki kuch value hai
        count1++; //move to next floor
        n++; //increment floor number
        another=to_string(n); //check again
    }
    while(count(another.begin(),another.end(),'8')==0){ //ek bhi 8 nhi hai
        n++; //move to next floor
        count1++; // this is so called b jitne times se floor move kar rahe
        another=to_string(n); //nd turn that new value to string and check again the whole thing
    }
    cout<<count1;
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