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
    string alpha;
	cin>>alpha;
	int k,mx=0;
	cin>>k;
	int a[26],i; 
	long sum=0;
	for(i=0;i<26;i++)
	{
		cin>>a[i]; //input
		mx=max(mx,a[i]); //max frequency of alpha
	}
	for(i=0;i<alpha.length();i++)
	{
		sum+=(i+1)*a[alpha[i]-'a']; //formula
	}
	for(i=1;i<=k;i++)
	{
		sum+=mx*(alpha.length()+i); //iteration through string
	}
	cout<<sum; //max sum
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