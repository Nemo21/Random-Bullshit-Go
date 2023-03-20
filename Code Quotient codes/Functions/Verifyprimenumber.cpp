#include <iostream>
using namespace std; 
int n;
bool verifyPrime(int n){
  if(n == 0 || n == 1){
      return false;
  }
  for (int i = 2; i < n; i++)
  {
      if(n%i == 0){
          return false;
      }
  }
  return true;
}
int main()
{
    cin>>n;
}