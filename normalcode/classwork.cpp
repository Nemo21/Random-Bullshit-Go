#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vectorname; //declaration of empty vector 
    int n; //size of vector 
    cin>>n; //input size of vector 
    for(int i=0; i<n;i++){  
        int a; //element of vector
        cin>>a; //input elements of vector for vector size 
        //condition here for prime number that number should only be divisble by one nd itself 
        //both range variable
        int var1,var2; 
        for(int i=var1;i<var1;i++){
            if(a%1==0 && a%a==0){
                int inputnum;
                if(primenumber1 + primenumber2 ==inputnum)
                vectorname.push_back(a); //push elements into the initialised empty array 
                for(auto i = vectorname.begin(); i != vectorname.end(); ++i)
                {
                    cout<<*i<<" ";
                }
            }
        }
    }
    return 0;
}