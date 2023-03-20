#include <iostream>
using namespace std;
int main()
{
    int sumodd=0; //to add only in sum of odd numbers
    int sumeven=0; // to add only in sum of even numbers 
    int upperbound=0; // till what numbers to be added
    int absdiff=0; // difference between sumodd and sumeven
    cin>>upperbound; //input the number till we have to add i.e upper limit 
    int number; // the initial start of add
    cin>>number; // input the initial start of add
    while (number<=upperbound) //while number is less than or equal to the max limit 
    {
        if (number%2==0) //it will check if the number coming the loop one by one are even or odd
        {
            sumeven+=number; //if even it will add the number with sumeven (sum of only even numbers is happening here)
        }
        else
        {
            sumodd+=number; // if odd it will add the number with sumodd( sum of only odd numbers happening here)
        }
        ++number; // number is being incremented to avoid miscalculation,infinite loop
    }
    
    if (sumodd>sumeven) // now we have calculated sumeven and sumodd now  
    {                    //we will check which is greater in order to find the difference between the two
        absdiff=sumodd-sumeven; //here sumodd is greater than sumeven 
    }
    else
    {
        absdiff=sumeven-sumodd; //here sumodd is less that sumeven
    }

    cout<<"sum of odd numbers: "<<sumodd<<endl; //print sumodd
    cout<<"sum of even numbers: "<<sumeven<<endl; //print sumeven
    cout<<"absdiff of sum of even and sum of odd: "<<absdiff<<endl; //print difference
    
}