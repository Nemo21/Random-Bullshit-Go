#include <iostream>
using namespace std;
int Getmin(int arr[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        // if(arr[i]<min){
        //     min=arr[i];
        // }
        //min is a predefined fxn which takes two parameters 
        //compares them and then stores the min of those two 
        //in a seperate variable 
        mini=min(mini,arr[i]);
    }
    //returning minimum value in a given array
    return mini;
}
int Getmax(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        //max is a predefined fxn which takes two parameters 
        //compares them and then stores the max of those two 
        //in a seperate variable 
        maxi=max(maxi,arr[i]);
    }
    //returning maximum value in a given array
    return maxi;
}
int main(){
    //inititally array is of size 100
    int arr[100];
    int size;
    //input size of array 
    cin>>size;
    //taking input in array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int value1=Getmin(arr,size);
    int value2=Getmax(arr,size);
    cout<<"Max value is "<<value2<<endl;
    cout<<"Min value is "<<value1<<endl;
    return 0;
}