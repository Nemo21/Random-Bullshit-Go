#include <iostream>
using namespace std;
int main(){
    int N1,N2;
    //the two inputs 
    cin>>N1>>N2;
    //if n1>n2 print difference
    if(N1>N2){
        cout<<N1-N2;
    }
    //else print sum
    else{
        cout<<N1+N2;
    }
    return 0;
}