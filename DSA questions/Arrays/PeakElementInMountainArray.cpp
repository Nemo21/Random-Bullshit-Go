#include <iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; //printing array elements with space separation
    }
    cout<<endl;
}
//SHOULD BE A MOUNTAIN ARRAY 
int peakIndeaxInMountainArray(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){ // to avoid the same comparision more than once
        if(arr[mid]<arr[mid+1]){ //Left slope of mountain
            start=mid+1;
        }
        else{ //both peak and right slope of mountain considered in this case
            end=mid; //if right part then end = mid-1 since peak case also considered so end=mid
        }
        mid=start+(end-start)/2; //update value of mid since value of start and end is changing 
    }
    return start; //return peak element 
}
int main(){
    int arr[4]={0,2,1,0};
    cout<<"The array is"<<endl;
    PrintArray(arr,4);
    cout<<"The above array should be a mountain array";
    cout<<endl;
    cout<<"The peak element is "<<endl;
    int answer=peakIndeaxInMountainArray(arr,4);
    cout<<answer;
    return 0;
}