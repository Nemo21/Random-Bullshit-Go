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
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec[i]=x;
    }
    sort(vec.begin(),vec.end());
    vector<int> left,right;
    for(int i=0;i<n/2;i++){
        left.push_back(vec[i]);
    }
    for(int i=n/2;i<n;i++){
        right.push_back(vec[i]);
    }
    int okay=1;
    int orig=0;
    int lefti=0,rightj=0;
    while(orig<n){
        if(okay&& lefti<left.size()){ //first element from left ,third element from left
            vec[orig]=left[lefti];
            lefti++;
            okay=0;
        }
        else if(!okay &&rightj<right.size()){
            vec[orig]=right[rightj]; //second element from right ,fourth element from right
            rightj++;
            okay=1;
        }
        orig++;
    }
    okay=1;
    for(int i=0;i<n;i++){
        if(i==0){ //first element ke left me to kuch hoga nhi since circular to last element (condition check kar rahe ) ,ya to dono smol ho yo dono ith se big ho
            if(vec[i]>=vec[i+1] && vec[i]<=vec[n-1]){ //ya ye hoga
                okay=0;
            }
            else if(vec[i]<=vec[i+1]&& vec[i]>=vec[n-1]){//ya ye hoga
                okay=0;
            }
        }
        else if(i==n-1){ //last element ke right me to kuch hoga nhi since circular to first element (condition check kar rahe ) ,ya to dono smol ho yo dono ith se big ho
            if(vec[i]>=vec[0] && vec[i]<=vec[i-1]){//ya ye hoga
                okay=0;
            }
            else if(vec[i]<=vec[0] && vec[i]>=vec[n-1]){//ya ye hoga ,ya to dono smol ho yo dono ith se big ho
                okay=0;
            }
        }
        else{
            if(vec[i]>= vec[i+1] && vec[i]<=vec[i-1]){//ya ye hoga (i th element should be either smollest of neighbours or greatest of neighbours)
                okay=0;
            }
            else if(vec[i]<=vec[i+1] && vec[i]>=vec[i-1]){//ya ye hoga (i th element should be either smollest of neighbours or greatest of neighbours)
                okay=0;
            }
        }
    }
    if(okay){
        cout<<"YES"<<endl;
        for(int element: vec){
            cout<<element<<" ";
        }
    }
    else{
        cout<<"NO";
    }
    return ;
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