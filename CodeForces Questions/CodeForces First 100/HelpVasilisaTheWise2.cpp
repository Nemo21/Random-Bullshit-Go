#include <bits/stdc++.h>
 
using namespace std;
 
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define vt(type)        vector<type>
#define si              set<ll>
 

 
int main(){
    int row1, row2,  col1, col2, dia1, dia2;
    cin>>row1>>row2>>col1>>col2>>dia1>>dia2;
    for (int i= 1; i<=9 ;i++) //row
    for (int j= 1; j<=9; j++) //col
    for (int k = 1; k<=9; k++) //left,then the right diagonal
    for (int l =1; l<=9; l++) {
    if (i==j || i==k || i==l||j==k ||j==l ||k==l) continue; //check if any of them already equal
    if (i+j==row1 && k +l==row2 &&i+k==col1&&j+l==col2 && i+l==dia1 && j+k==dia2) {
      cout << i << ' '<<j << '\n' << k << ' ' << l <<'\n'
      ; return 0;
    }
  }
  cout << -1;
}