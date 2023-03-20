#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int Point;
        cin>>Point;
        //0-point forloop 
        //+=2
        //if point %2 count+=1
        int count=0;
        for(int i=0;i<=Point;i+=2){
            if(i%2==0){
                count+=1;
            }
        }
        cout<<count<<endl; 
        
    }
    return 0;
} 
