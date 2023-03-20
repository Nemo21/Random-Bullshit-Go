#include <iostream>
using namespace std;
int setbit1(int n1){
    int count=0;
    while(n1!=0){
        if(n1&1){
            count++;
        }
        n1=n1>>1;
    }
    return count;
}
int setbit2(int n2){
    int count=0;
    while(n2!=0){
        if(n2&1){
            count++;
        }
        n2=n2>>1;
    }
    return count;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int ans1=setbit1(n1);
    int ans2=setbit2(n2);
    int result=ans1+ans2;
    cout<<result;
    return 0;
}