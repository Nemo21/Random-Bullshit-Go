#include <iostream>
using namespace std;
int main(){
    int i=1;
    /*Loops in C++
    1.FOR LOOP
    2.WHILE LOOP
    3.DO-WHILE LOOP
    */

   //FOR LOOP
   //Syntax
//    for(initialization;condition;updation)
//    {
//        LOOP BODY(C++ code)
// //    }
//    cout<<"From for loop";
//    for (int i = 0; i < 400; i++)
//    {
//        /* code */
//        cout<<i<<endl;
//        i++;
//    }

   //WHILE LOOP
   
//    cout<<"From while loop";
//    while (i<=40)
//    {
//        /* code */
//        cout<<i<<endl;
//        i++;
//    }
//    for (size_t i = 0; true condition; i++)
//    {
//        cout<<"Example of infinite for loop";3
//    }
   

//    while(true){
//        cout<<"Infinite";
//        //Example of infinite while loop
//    }
//     cout<<"from do while loop";
//     do{
//        cout<<i<<endl;
//        i++;
//    }while(i<=40);
    //  do{
    //      statements
    //  }while(condition);
    //in this even when condition false then also the loop runs one time 
    int n;
    cout<<"input number table";
    cin>>n;

    do{
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }while(i<=10);
    //printing a multiplication table

    
    

   
   
}