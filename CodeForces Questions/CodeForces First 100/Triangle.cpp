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
bool checkingifrightoralmostright(int x1,int y1, int x2,int y2,int x3,int y3){
    int side1,side2,side3;
    side1=((x2-x1)*(x2-x1))+ ((y2-y1)*(y2-y1));
    side2=(((x3-x2)*(x3-x2))+ ((y3-y2)*(y3-y2)));
    side3=(((x3-x1)*(x3-x1))+ ((y3-y1)*(y3-y1)));
    if(side1==0 || side2==0 || side3==0){
        return false;
    }
    if(side1+side2==side3){
        return true;
    }
    if(side1+side3==side2){
        return true;
    }
    if(side2+side3==side1){
        return true;
    }
    return false;
}
void solve(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(checkingifrightoralmostright(x1,y1,x2,y2,x3,y3)){
        cout<<"RIGHT"<<"\n";
        return;
    }
    if(checkingifrightoralmostright(x1 + 1, y1, x2, y2, x3, y3) || checkingifrightoralmostright(x1 - 1, y1, x2, y2, x3, y3) || checkingifrightoralmostright(x1, y1 + 1, x2, y2, x3, y3) || checkingifrightoralmostright(x1, y1 - 1, x2, y2, x3, y3)
            || checkingifrightoralmostright(x1, y1, x2 + 1, y2, x3, y3) || checkingifrightoralmostright(x1, y1, x2 - 1, y2, x3, y3) || checkingifrightoralmostright(x1, y1, x2, y2 + 1, x3, y3) || checkingifrightoralmostright(x1, y1, x2, y2 - 1, x3, y3) 
            || checkingifrightoralmostright(x1, y1, x2, y2, x3 + 1, y3) || checkingifrightoralmostright(x1, y1, x2, y2, x3 - 1, y3) || checkingifrightoralmostright(x1, y1, x2, y2, x3, y3 + 1) || checkingifrightoralmostright(x1, y1, x2, y2, x3, y3 - 1)){
                cout<<"ALMOST"<<"\n";
                return;
    }
    cout<<"NEITHER"<<"\n";
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