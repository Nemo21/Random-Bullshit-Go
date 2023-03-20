#include<iostream>
using namespace std;
int main()
{
    int sum = 0 , upper_limit, lower_limit;
    //initialise sum with 0,input the two limits 
    cout <<"Enter the lower limit: ";
    cin >> lower_limit;
    //enter lower limit
    cout <<"Enter the upper limit: ";
    cin >> upper_limit;
    //enter upper limit
    for(int i = lower_limit; i <= upper_limit; i++) //loop works till i is less than equal to upper limit 
    //i is incremented after every iteration
    //calculating sum of numbers in the given range
    {
        sum += i;
        //the incremented i is added in previous value of sum
        //after each iteration
    }

    //printing output
    cout<<"The Sum of Natural Numbers from"<<lower_limit<<"to"<< upper_limit<<"is"<< sum;
    return 0;
}

//we create the function to calculate the sum of range and then we pass this as arguments in the function
/*
#include <iostream>
using namespace std;
int main()
{
  int T;
  int min,max;
  cin>>T;
  while(T)
  {
    sumOfRange(min,max);
  }
}
int min;
int max;
int sumOfRange(int min, int max){
  int sum=0;
  cin>>min;
  cin>>max;
  for(int i=min;i<=max;i++)
    {
        sum += i;
    }
  cout<<sum;
}

 */ 