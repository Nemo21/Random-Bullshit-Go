#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n; //array size
        cin>>n;
        int x,y; //things to add
        cin>>x>>y; 
        int a[n],b[n]; //two arrays 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]+x==b[i] || a[i]+y==b[i]){
                continue;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
        cout<<endl;
    }
    return 0;
}