#include <iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
    
}