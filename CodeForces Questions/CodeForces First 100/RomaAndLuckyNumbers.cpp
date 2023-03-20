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
    int noofposint,noofluckdig;
    cin>>noofposint>>noofluckdig;
    int final=0;
    while(noofposint--){
        ll digit;
        cin>>digit;
        int countofluckydig=0;
        while(digit>0){
            if(digit%10==4 || digit%10==7){
                countofluckydig++;
            }
            digit/=10;
        }
        if(countofluckydig<=noofluckdig){
            final++;
        }
    }
    cout<<final<<endl;
    return 0;
}