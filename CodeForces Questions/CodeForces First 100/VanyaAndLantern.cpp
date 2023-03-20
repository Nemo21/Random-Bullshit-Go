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
    int noflanterns,totallen;
    cin>>noflanterns>>totallen;
    int street[noflanterns];
    for(int i=0;i<noflanterns;i++){
        cin>>street[i];
    }
    sort(street,street+noflanterns);
    int difference=2*max(street[0],totallen-street[noflanterns-1]);
    for(int i=1;i<noflanterns;i++){
        difference=max(difference,(street[i]-street[i-1]));
    }
    cout<<fixed<<setprecision(9)<<(double) difference/2;
    //difference is radius of light hence the two times because light is emitted both sides
    //of points where the lanterns are,difference from first position and from last difference

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