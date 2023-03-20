#include <iostream>
using namespace std;
//normal printing array fxn
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//binary search fxn 
//three parameters 
//the array,its size and the key to search in the array
int BinarySearch(int arr[],int size,int key){
    int start=0; //beginning of array
    int end=size-1; //end of the array
    int mid=start+(end-start)/2; //mid point of the array 
    //this formula better to solve issues regarding integer range
    //run loop till start is at the left and end is at right and dont cross each other  
    while(start<=end){
        //key is equal to mid element
        if(arr[mid]==key){
            return mid;
            //simply return index
        }
        if(arr[mid]<key){
            //then go to right part of mid array
            start=mid+1;
        }
        else{
            //go to left part of mid array
            end=mid-1;
        }
        //change value of mid because either way start and end is varying
        mid=start+(end-start)/2;
    }
    //return -1 if element is not found
    return -1;
}
int main(){
    int arr[8]={12,14,17,18,20,22,27,29};
    PrintArray(arr,8);
    int key;
    cout<<"Enter Element to search";
    cin>>key;
    int result=BinarySearch(arr,8,key);
    cout<<"Element"<<key<<"is present at index"<<result;
    if(result==-1){
        cout<<"Means Element not present in the current array";
    }
    return 0;
}