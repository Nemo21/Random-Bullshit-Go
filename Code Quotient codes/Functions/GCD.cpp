#include <iostream>
using namespace std;
int gcd(int i, int j){
  if(j == 0){
    return i;
  }
  return gcd(j,i%j);
}