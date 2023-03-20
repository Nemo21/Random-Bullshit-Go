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
    // string s;
    // cin>>s;
    // ll size=s.size();
    // ll ans=0,count0=0;
    // ll one = count(s.begin(),s.end(),'1');
    // ll zero=count(s.begin(),s.end(),'0');
    // vector<ll>pzero,szero;
    // for(ll i=0;i<size;i++){
    //     if(s[i]=='0'){
    //         count0++;
    //     }
    //     else{
    //         pzero.push_back(count0);
    //     }
    // }
    // pzero.push_back(count0);
    // count0=0;
    // for(ll i=size-1;i>0;--i){
    //     if(s[i]=='0'){
    //         count0++;
    //     }
    //     else{
    //         szero.push_back(count0);
    //     }
    // }
    // szero.push_back(count0);

    // ll low=0,high=one;
    // while(low<=high){
    //     ll mid=(low+high)/2;
    //     ll possible=0;
    //     for(ll i=0;i<=mid;++i){
    //         ll left=zero;
    //         left-=pzero[i];
    //         left-=szero[mid-1];
    //         if(left<=mid){
    //             possible=1;
    //             break;
    //         }
    //     }
    //     if(possible){
    //         ans=mid;
    //         high=mid-1;
    //     }
    //     else{
    //         low=mid-1;
    //     }
    // }
    // cout<<ans<<endl;
    // return true;
    string s;
    cin >> s;
	int size = s.size();
	vector<int> pref(size + 1, 0);
	for(int i = 0; i < size; i++)	{
		pref[i + 1] = pref[i] + (s[i] - '0');
	}
	int ones = pref[size], best = size;
	for(int i = 0; i + ones <= size; i++)	{
		best = min(best, ones - (pref[i + ones] - pref[i]));
	}
	cout << best << endl;
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