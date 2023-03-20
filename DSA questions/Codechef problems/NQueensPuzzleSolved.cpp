#include<bits/stdc++.h>
#include <math.h>
#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int N;
        cin>>N;
        double Sol=pow(0.143,N);
        if(Sol-floor(Sol)<0.5){
            cout<<floor(Sol);
        }
        else{
            cout<<ceil(Sol);
        }
    }
    return 0;
}