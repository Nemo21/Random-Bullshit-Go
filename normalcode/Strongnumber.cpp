#include<iostream>
using namespace std;
int main()
    {
        int ip,sum=0;
        //initialise sum with 0
        cout<<"Enter number to check: ";
            //user input
        cin>>ip;
        int save=ip;
        //here we save the input ip in another variable 
        //logic to check for Strong Number starts
        while(ip)
        {
            int num=ip%10; 
            //here we find the number at one's place to find its factorial individual first and then we add 
            // the same procedure takes place untill we have reached the end of input number 
            int fact = 1;
            //finding factorial of each digit of input
            for(int i=num;i>0;i–)
            {
                fact=fact*i;
            }
            sum+=fact;
            //adding the one's place and other place value's numbers's factorial
            ip/=10;
        }
        //checking for Strong Nunber
        if(sum==save)
        {
            cout<<save<<"is a Strong Number";
            //if the input is same as the sum of the factorial of the individual numbers at place values 
        }
        else
        {
            cout<<save<<"is not a Strong Number";
        }
        //logic ends
        return 0;
    }