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
    // int row,col;
    // cin>>row>>col;
    // int arr1[row]={0},arr2[col]={0};
    // for(int i=0;i<row;i++){
    //     string line;
    //     cin>>line;
    //     for(int z=0;z<col;z++){
    //         if(line[z]=='S'){
    //             arr1[i]=1;
    //             arr2[z]=1;
    //         }
    //     }
    // }
    // int ca=0;
    // for(int i=0;i<row;i++){
    //     for(int z=0;z<col;z++){
    //         if(arr1[i]==0 || arr2[z]==0){
    //             ca++;
    //         }
    //     }
    // }
    // cout<<ca<<endl;
    int row,col;
    cin>>row>>col;
    char originalgrid[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>originalgrid[i][j];
        }
    }
    int ROW[100],COL[100],count=0;

    for(int i=0;i<row;i++) ROW[i]=1;
    for(int j=0;j<col;j++) COL[j]=1;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(originalgrid[i][j]=='S'){
                ROW[i]=COL[j]=0;
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(ROW[i]|| COL[j]){
                count++;
            }
        }
    }
    cout<<count;
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