#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
   long int year; //year declaration
   cin>>year; //input
   if(year%4==0){ //if divisible by 4 then inner checking
     if(year%100==0){ //if divisible by 100
       if(year%400==0){ //if divisible by all above and 400 also 
         cout<<"Leap Year";
       }
       else{ //if divisible by all above but not 400 then not leap year
         cout<<"Not a Leap Year";
       }
     } //if not divisible by 100 but divisible by 4 then leap year
     else{
       cout<<"Leap Year";
     }
   } //if divisible by none of them then not a leap year
  else{
    cout<<"Not a Leap Year";
  }
}