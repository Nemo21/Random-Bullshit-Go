#include <iostream>
using namespace std;
void Printcount(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return ;
}
int main(){
    int n;
    cin>>n;
    Printcount(n);
    return 0;
}