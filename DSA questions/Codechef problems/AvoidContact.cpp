#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int TotalPeople;
        int InfectedPeople;
        cin>>TotalPeople>>InfectedPeople;
        int Rooms=2*InfectedPeople;
        Rooms=Rooms+TotalPeople-InfectedPeople;
        if(TotalPeople==InfectedPeople){
            Rooms--;
        }
        cout<<Rooms;
    }
    return 0;
}