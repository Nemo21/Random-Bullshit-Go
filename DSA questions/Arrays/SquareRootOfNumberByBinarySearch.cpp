#include <iostream>
using namespace std;
//sqaure root fxn
//calculate value of mid
//condition
//if mid*mid===num return ans
//if mid*mid>=num return end=mid-1
//if mid*mid<=num return ans=mid and start=mid+1
long long int SqrtRoot(int num){
    int start=0;
    int end=num;
    long long int mid=start+(end-start)/2;
    long long int answer;
    while(start<end){
        long long int square=mid*mid;
        if(square<num){
            answer=mid;
            start=mid+1;
        }
        else if(square>num){
            end=mid-1;
        }
        else{
            return mid;
        }
        mid=start+(end-start)/2;
    }
    return answer;
}
double morePrecision(int n,int precision,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int number;
    int precision;
    cout<<"Enter the number you wanna find the square root of"<<endl;
    cin>>number;
    cout<<"Enter the number till which precision is required"<<endl;
    cin>>precision;
    int tempSol=SqrtRoot(number); 
    cout<<"The square root of number"<<number<<"is"<<endl;
    morePrecision(number,precision,tempSol);
    return 0;
}