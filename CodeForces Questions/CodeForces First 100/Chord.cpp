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
    string chords[13]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
    string input1,input2,input3;
    int iter[1000];
    cin>>input1>>input2>>input3;
    for(int i=0;i<12;i++){ //total number of 12 chords
        if(input1==chords[i]){
            iter[1]=i;
        }
        if(input2==chords[i]){
            iter[2]=i;
        }
        if(input3==chords[i]){
            iter[3]=i;
        }
    }
    for(int i=1;i<=7;i++){ //checking the three inputs
        sort(iter+1,iter+1+3); //sorting so can check cyclically
        if(abs(iter[1]-iter[2])==4 && abs(iter[2]-iter[3])==3){ //condition for major chord
            cout<<"major"<<endl;
            return;
        }
        if(abs(iter[1]-iter[2])==3 && abs(iter[2]-iter[3])==4){ //condition for minor chord
            cout<<"minor"<<endl;
            return;
        }
        iter[1]+=12; //hop to next
    }
    cout<<"strange"<<endl; //if all of the above is false
    return ;
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