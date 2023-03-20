#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int Vote1,Vote2,Vote3;
        int TotalVotesCity1,TotalVotesCity2,TotalVotesCity3;
        //to win vote1+vote2+vote3/2>totalcity1+totalcity2+totalcity3
        cin>>Vote1>>Vote2>>Vote3>>TotalVotesCity1>>TotalVotesCity2>>TotalVotesCity3;
        int VotesofChefParty=(TotalVotesCity1+TotalVotesCity2+TotalVotesCity3)/2;
        //hacc city 3 vote
        if((Vote1+Vote2+TotalVotesCity3)>VotesofChefParty){
            cout<<"YES"<<endl;
        }
        //hacc city 2 vote
        else if((Vote1+TotalVotesCity2+Vote3)>VotesofChefParty){
            cout<<"YES"<<endl;
        }
        //hacc city 1 vote
        else if((TotalVotesCity1+Vote2+Vote3)>VotesofChefParty){
            cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl; 
        }
    }
    return 0;
}