#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    //for first triangle
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col=col+1;
        }
    }
    //star triangle







    //third triangle with reverse count printin
    int col=1;
        while(col<=n-row+1){
            cout<<"*";
            col=col+1;
        }

    cout<<endl;
    row=row+1;
    return 0;
}