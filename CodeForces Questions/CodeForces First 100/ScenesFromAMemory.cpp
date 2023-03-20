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
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for (int i = 5; i*i <=n; i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
void solve(){
    ll k;
    string s;
    cin>>k>>s;
    for(int i=0;i<k;i++){
        if((s[i]-'0')!=2 && (s[i]-'0')!=3 && (s[i]-'0')!=5 && (s[i]-'0')!=7){
            cout<<"1\n"<<s[i]<<"\n";
            return;
        }
    }
    int n;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            n=s[i]-'0';
            n*=10;
            n+=(s[j]-'0');
            if(isPrime(n)==false){
                cout<<"2\n"<<n<<"\n";
                break;
            }
        }
        if(isPrime(n)==false){
            break;
        }
    }
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