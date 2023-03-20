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
 
    // int totalhours,hoursneededtoread;
    // cin>>totalhours>>hoursneededtoread;
    // int array1[totalhours];
    // int array2[totalhours];
    // for(int i=0;i<totalhours;i++){
    //     cin>>array1[i];
    //     array2[i]=array1[i];
    // }
    // //binary search on array 2
    // // return index of elements greater than mid from array 1
 
    int totalhours,hoursneededtoread;
    vector<int> vec1;
    cin>>totalhours>>hoursneededtoread;
    int array1[totalhours];
    vector<pair<int,int>> vec;
    for(int i=0;i<totalhours;i++){
        cin>>array1[i];
        vec.push_back({array1[i],i+1});
    }
    sort(vec.rbegin(),vec.rend());
    cout<<vec[hoursneededtoread-1].first<<endl;
    for(int i=0;i<hoursneededtoread;i++)
	{
		cout<<vec[i].second<<" ";
	}
    cout<<endl;
    return;
}
 
int main(){
   
    int t=1;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
   
    //cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}