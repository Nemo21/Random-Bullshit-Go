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
 
 
int main(){
    int n,m;
	cin>>n>>m;
	char arr[n][m];
	vector<bool>v(n,false);
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<m;i++){
		char best=0;
		for(int j=0;j<n;j++){
			char d=arr[j][i];
			best=max(best,d);
		}
		for(int l=0;l<n;l++){
			if(arr[l][i]==char(best))
			v[l]=true;
		}
	}
	for(int i=0;i<n;i++){
		if(v[i]==true)count++;
	}
	cout<<count;
    
}