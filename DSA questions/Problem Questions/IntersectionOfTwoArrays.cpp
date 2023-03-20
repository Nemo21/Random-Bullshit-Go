//This solution shows time limit exceeded
#include <iostream>
using namespace std;
void PrintArray(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
int IntersectionOfArray(int arr1[],int arr2[],int n,int m){
    int ans=0;
    for(int i=0;i<n;i++){ //traverse arr1 from 0 to n
        int element=arr1[i]; //initialise element with ith element of arr1
        for(int j=0;j<m;j++){ //traverse arr2 from 0 to m
            if(element<arr2[j]){ //if element is less than jth element of arr2
                break; //come out of the loop 
            }
            if(element==arr2[j]){ //if element is equal to jth element of arr2
                ans=element; //put ans in element 
                arr2[j]=-2; // this so that one value cant be mapped twice 
                break; //then come out of the loop
            }
        }
    } //returning ans
    return ans;
}
int main(){
    int arr1[100];
    int arr2[100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr1[n];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[m];
    }
    cout<< IntersectionOfArray(arr1,arr2,n,m);
    return 0;
}

