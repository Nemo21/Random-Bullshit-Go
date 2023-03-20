#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(i==2){
            break;
            //break used to exit loop nd not do the other iterations 
            // here output will be 0 1  and then the flow of control will be outside the for loop
        }
        cout<<i<<endl;
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(i==2){
            continue;
            //continue used to exit loop ONLY for the condition given in if and performs other iterations i.e it will skip the iteration which follows the given condition in if 
            //here output will be 0 1 3 and then the flow of control will be outside the for loop
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}