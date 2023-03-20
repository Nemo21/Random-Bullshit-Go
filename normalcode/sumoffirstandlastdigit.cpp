#include <iostream>
using namespace std;
int main(){
    int Testcase;
    cin>>Testcase;
    for (int i=0;i<Testcase;i++){
        int n,sum=0,firstdigit,lastdigit;
        cin>>n;
        lastdigit=n%10;
        while(n>=10){
            n=n/10;
        }
        firstdigit=n;
        sum=firstdigit+lastdigit;
        cout<<sum;
    }
    return 0;
}


/*
#include <stdio.h>
int main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    // Find last digit of a number
    lastDigit = n % 10;
    //Find the first digit by dividing n by 10 until n greater then 10
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    //Calculate sum of first and last digit
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
*/