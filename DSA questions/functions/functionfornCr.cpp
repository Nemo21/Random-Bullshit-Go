#include <iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int numer=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int answer=numer/denom;
    return answer;
}
int main(){
    int a,b;
    cin>>a>>b;
    int answer=nCr(a,b);
    cout<<"answer is"<<answer;
    return 0;
}