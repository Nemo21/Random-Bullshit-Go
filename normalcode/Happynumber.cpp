#include <iostream>
using namespace std; 
//the program is divided into three parts with two fxns as user defined 
//the one as the predefined main fxn 
int SumOfSqNum(int giveno) //here is the first user defined fxn 
//this fxn calculates the sum of the squares of two or more digit number
{
    int SumofSq=0; //initialised as 0
    while (giveno)
    {
        SumofSqr+=(giveno%10)*(giveno%10); //calculating the sum of squares
        giveno/=10; //now we change the value of giveno to the digit present with the digit after it in place value
    }
    return SumofSq;
}
//here is the second user defined fxn 
bool checkHappy(int checknum)
//this fxn checks if number is happy or not
{
    int slowno,fastno;
    slowno=fastno=checknum;
    do 
    {
        slowno=SumOfSqNum(slno);
        fastno=SumOfSqNum(SumOfSqNum(fastno)); //here the fxn SumOfSqNum is called instead of writing the code again
    }
    while (slowno!=fastno) 
    {
        return slowno==1;
    }
    
}
int main()
{
    int input;
    cout<<"Check if number happy or not: \n";
    cout<<"Input number: ";
    cin>>input;
    if (checkHappy(input)) //here the fxn checkhappy is called instead of writing the code again
    {
        cout<<input<<"is a happy number \n";
    }
    else
    {
        cout<<input<<"is NOT a happy number \n";
    }
}