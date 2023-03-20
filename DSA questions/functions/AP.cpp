#include <iostream>
using namespace std;
int ArthProg(int n){
    int AP;
    AP=3*n+7;
    return AP;
}
int main(){
    int n;
    cin>>n;
    int answer=ArthProg(n);
    cout<<answer;
    return 0;
}