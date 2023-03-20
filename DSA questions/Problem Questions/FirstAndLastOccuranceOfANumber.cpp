#include <iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; //printing array element with space seperation
    }
    cout<<endl;
}
int FirstOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){ //moving or traversing inside the array
        if(arr[mid]==key){
            ans=mid;
            end=mid-1; //to search for any other advanced occurence
        }
        else if(arr[mid]<key){ //right part of array
            start=mid+1;
        }
        else if(arr[mid]>key){ //left part of array
            end=mid-1;
        }
        mid=start+(end-start)/2; //update value of mid since both the values of start and end change in any case
    }
    return ans;
}
int LastOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){ //moving or traversing inside the array
        if(arr[mid]==key){
            ans=mid;
            start=mid+1; //to search for any other later occurence
        }
        else if(arr[mid]<key){ //right part of array
            start=mid+1;
        }
        else if(arr[mid]>key){ //left part of array
            end=mid-1;
        }
        mid=start+(end-start)/2; //update value of mid since both the values of start and end change in any case
    }
    return ans;
}
int main(){
    int Array[6]={1,2,3,3,3,4};
    int key;
    cout<<"The given array is ";
    PrintArray(Array,6);
    cout<<"Enter the element you want to search in the given array";
    cin>>key;
    cout<<"The first occurence of"<<key<<"is at index "<<FirstOccurence(Array,6,key);
    cout<<"The last occurence of"<<key<<"is at index "<<LastOccurence(Array,6,key);
    return 0;
}