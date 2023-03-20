#include <iostream>
#include <vector>
using namespace std;
int main(){
    int count=0;
    int n;
    vector<int>nigger;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
        vector<int>nigger;
        nigger.push_back(count);
    }
    // insert each count till size =n
    //multiples of 3 OR 5 (observation)
    for(int i=0;i<count;i++){
        cout<<nigger[i]<<endl;
    }
}
/*
count initialise by 0
int number 
vector nigger
while n!=0
check no of 1 bit
increment count
right shift

*/