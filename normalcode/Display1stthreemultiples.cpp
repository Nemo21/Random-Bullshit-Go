#include <iostream>
using namespace std;
int main()
{
    long int number,multiple1,multiple2,multiple3; /* declaring variables to be used in the program */
    cout<<"Enter a number: ";
    cin>>number; /* input the number whose multiple has to be found */
    multiple1=number*1; /* calculating the multiples in line 8,9,10 */
    multiple2=number*2;
    multiple3=number*3;
    cout<<"First three multiples of the given number are:";
    cout<<multiple1<<","<<multiple2<<","<<multiple3;
    /* printing the calculated multiples */
}