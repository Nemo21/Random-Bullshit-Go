#include <iostream>
using namespace std;
int main()
{
    int num, originalNum, remainder, result = 0;  //inputs 
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num; 
    while (originalNum != 0) { //loop will work till number is 0
        // remainder contains the last digit,place value at from ones to hundreds
        remainder = originalNum % 10;
        //store the cube of the ones,tens,hundreds place 
        result += remainder * remainder * remainder;
        // removing last digit from the orignal number,
        //to enter the loop again and finding the result for the other place values 
        originalNum /= 10;
    }
    if (result == num)
    {
        //if the number is equal to the sum of the cubes of the digits of the number 
        cout << num << " is an Armstrong number."; //is armstrong
    } 
    else
    { 
        cout << num << " is not an Armstrong number.";
    }
    return 0;
}