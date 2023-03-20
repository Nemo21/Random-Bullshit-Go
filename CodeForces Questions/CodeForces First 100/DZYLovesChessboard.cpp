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
    int nrow,mcol;
    char chessboard[1100];
    cin>>nrow>>mcol;
    for(int row=0;row<nrow;row++){
        cin>>chessboard;
        for(int col=0;col<mcol;col++){
            if(chessboard[col]=='.'){ //not a bad cell
                if((row+col)&1){
                    chessboard[col]='W';   //put in such way that no same color are on two adjacent cells
                }
                //like dis
                // WBWBWB or BWBWBWBW
                // BWBWBW    WBWBWBWB
                else{
                    chessboard[col]='B';
                }
            }
        }
        printf("%s\n",chessboard);
    }
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