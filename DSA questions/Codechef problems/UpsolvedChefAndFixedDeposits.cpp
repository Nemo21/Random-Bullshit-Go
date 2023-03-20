#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int NoOfDeposits,NoOfGoldCoins;
        cin>>NoOfDeposits>>NoOfGoldCoins;
        int Array1[NoOfDeposits];
        for(int i=0;i<NoOfDeposits;i++){
            cin>>Array1[i];
        }
        sort(Array1,Array1+NoOfDeposits);
        int coinsCurrentlyavailable=0,ans=-1;
        for(int i=NoOfDeposits;i>=0;i--){
            coinsCurrentlyavailable+=Array1[i];
            if(coinsCurrentlyavailable>=NoOfGoldCoins){
                ans=NoOfDeposits-i;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}