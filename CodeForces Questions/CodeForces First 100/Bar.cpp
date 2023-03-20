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
    
   int tes;
   string drink;
   int count=0;
   cin>>tes;
   while(tes--)
   {
   cin>>drink;
   if(isdigit(drink[0]))
   {
     int age=stoi(drink);   //string to int
     if(age<=17)
     {
       ++count;
     }
   }
   else if(drink=="ABSINTH" || drink=="BEER" || drink=="BRANDY" || drink=="CHAMPAGNE"
     ||drink=="GIN"||drink=="RUM"||drink=="SAKE"||drink=="TEQUILA"||drink=="VODKA"||drink=="WHISKEY"||drink=="WINE")
     {
        ++count;
     }
    }
    cout<<count<<"\n";
	return 0;
}