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
    string sentence;
    char alpha;
    getline(cin,sentence);
    int len=sentence.length();
    for(int i=len-1;i>=0;i--){
        if(sentence[i]!=' '&& sentence[i]!='?'){
            alpha=sentence[i];
            break;
        }
    }
    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o'|| alpha=='u'|| alpha=='y'|| alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O'|| alpha=='U'|| alpha=='Y' ){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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