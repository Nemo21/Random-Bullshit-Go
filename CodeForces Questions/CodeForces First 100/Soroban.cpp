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
    int number;
    cin>>number;
    int digit;
    string coll[]={"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
    do{
        digit=number%10;
        cout<<coll[digit]<<endl;
        number=number/10;
    }
    while(number);
    return ;
    //cout the combination for every last digit of the number input and then join

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