#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int testcase=1; //at least one testcase
    cin>>testcase; //input testcase
    while(testcase--){ //while testcase number yes
        int n,x; // x gold coin , n number of deposit 
        cin>>n>>x; //input n and x
        int arr[n]; //array of number of deposit
        for(int i=0;i<n;i++){
            cin>>arr[i]; // input array elements
        }
        sort(arr,arr+n,greater<>()); //
        bool c=false;
        int sum=0,i;
        for(i=0;i<n;i++){
            sum+=arr[i];
            if(sum>=x) {
                c=true;
                break;
            }
        }
        if(c) {
            cout<<i+1<<endl;
        }
        else {
            cout<<"-1\n";
        }
    }
    return 0;
}