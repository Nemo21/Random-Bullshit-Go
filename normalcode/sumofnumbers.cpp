#include <iostream>
using namespace std;
int main(){
    int Testcase;
    int sum;
    cin>>Testcase;
    for (int i=0;i<Testcase;i++){
        int a;
        int sum=0;
        cin>>a;
        while(a){
            sum+=a%10;
            a=a/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}