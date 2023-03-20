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
//non optimised solution to check if number is prime or not
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
//sieve of eratosthenes(optimised solution to check if number is prime or not)
//complexity of n*log(logn),complexity for segmented seive O(sqrt(n))
int CountPrime(int n){
    int count=0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }
        }
    }
    return count;
}
//HCF or GCD gcd(a,b)=gcd(a-b,b) 
//                or gcd(a%b,b)  
// lcm(a,b)*gcd(a,b)=a*b
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a=b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
//fast power(fast exponentiation) or modulo arthematic
//O(log b)
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int res=1;
    while(n>0){
        if(n&1){ // conditon for odd
            res=( 1LL*(res)*(x)%m)%m;
        }
        x=(1LL*(x)%m*(x)%m)%m;
        n=n>>1; //divide by 2
    }
    return res;
}
void solve(){
    
    return ;
}

 
int main(){
    
    int t=1;
 
   
   cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}