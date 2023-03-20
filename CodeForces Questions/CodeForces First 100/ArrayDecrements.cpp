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
    int temp=0;
    cin>>n;
    vector<int> vecA(n);
    vector<int> vecB(n);
    for(int i=0;i<n;i++){
        cin>>vecA[i];
    }
    for(int i=0;i<n;i++){
        cin>>vecB[i];
    }
    int maxA=*max_element(vecA.begin(),vecA.end());
    int maxB=*max_element(vecB.begin(),vecB.end());
    int difference=abs(maxA-maxB);
    for(int i=0;i<n;i++){
        vecA[i]=max(vecA[i]-difference,0);
    }
    for(int i=0;i<n;i++){
        if(vecA[i]!=vecB[i]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return ;
    /*
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll diff=1e18;
    ll maxi=0; //difference agar negative bhi hota , matlab ki increment hota but cant do increment
    for(int i=0;i<n;i++){
        if(b[i]>0){
            if(diff==1e18){ //uninitialised
                diff=a[i]-b[i]; //to initialise with difference
            }
            else if(diff!=a[i]-b[i]){ //agar difference hai initialised but jo difference hona chahiye uske equal nhi hai
                cout<<"NO"; //to vo do array kabhi equal nhi ho sakte
                return;
            }
        }
        else{ //agar b[i] 0 hai usse less wahi 5 0 wala case jisme difference phele se 3 chal raha tha
            maxi=max(maxi,a[i]); //to max lena 
        }
    }
    if(diff==1e18 || diff>=max){ //all b[i]==0 ya fir diff>max max is not 5 but 0 1 2 3 
        cout<<"YES;
        return;
    }
    else{
        cout<<"NO";
        return;
    }
    */
}

 
int main(){
    
    int t=1;
    cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}