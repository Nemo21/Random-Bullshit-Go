#include<iostream>
using namespace std;
int main(){
    // looping and if else statements
    // cout<<"Test case";
    int age;
    cout<<"Enter your age below";
    cin>>age;
    // cout<<"Enter age"<<endl;
    // cin>>age;
    // if(age>18) && (age>0){
    //     cout<<"You cant vote";
    // }
    // else if(age==18){
    //     cout<<"You are JUST eligible to vote";
    // }
    // else{
    //     cout<<"You are completely eligible to vote";
    // }
    // switch case statements 
    switch (age)
    {
    case 18:
        cout<<"You are JUST eligible to vote"<<endl;
        break; //break means to forget about the other cases and just move to next snipet of code
    case 21:
        cout<<"You are 21"<<endl;
        break; //break means to forget about the other cases and just move to next snipet of code 
    
    default:
        cout<<"No special case"<<endl;
        break; //break means to forget about the other cases and just move to next snipet of code
    }
    //what would happen if there was no break in these cases?
    //Then it would print the code for all the cases including default 
}