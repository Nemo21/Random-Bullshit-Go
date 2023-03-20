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
int find(double prob){
    return ceil(sqrt(2*365*log(1-(1-prob))));
}
void solve(){
    float num=365;
    float den=365;
    float pr;
    int people=0;
    cout<<"Probability to find";
    cout<<endl;
    cin>>pr;
    float p=1;
    while(p>pr){
        p*=(num/den);
        num--;
        people++;
    }
    cout<<"Total number of people out of which there is "<<p<<" probability that two of them will have same bday is "<<people;
    return ;
}

 
int main(){
    int t=1;
    //cin >> t;
    while(t--){
        solve();
        //cout << "\n";
    }
    return 0;
}