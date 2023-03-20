#include <iostream>
using namespace std;
int main(){
    long int x,y,z,A;
    cin>>x,y,z;
    A=(++x+x--)-(y++ + --y)*(z-- - ++z);
    cout<<A;
}