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
#define dic             map
 
void solve(){
    int firstcupindex,secondcupindex,ballindex;
    cin>>ballindex;
    for(int i=1;i<=3;i++){ //Exactly 3 swaps
        cin>>firstcupindex>>secondcupindex;
        if(firstcupindex==ballindex){
            ballindex=secondcupindex;
        }
        else if(secondcupindex==ballindex){
            ballindex=firstcupindex;
        }
    }
    printf("%d\n",ballindex);
    return ;
}

 
int main(){
    freopen("input.txt", "r", stdin); //comment this when running on local machine testcase

    freopen("output.txt", "w", stdout);
    
    int t=1;
 
   
    // cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}