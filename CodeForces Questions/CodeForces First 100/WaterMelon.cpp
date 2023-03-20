#include <iostream>
#include <string>
using namespace std;
int main(){
    int weight;
    cin>>weight;
    if(weight==2){
        cout<<"NO";
        return 0;
    }
    if(weight%2==0){
        weight=weight/2;
        if(weight%2==0){
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}