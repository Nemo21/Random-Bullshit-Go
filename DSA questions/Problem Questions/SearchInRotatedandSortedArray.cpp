#include <iostream>
using namespace std;
//print array
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "; //printing array elements with space separation
    }
    cout<<endl;
}
//pivot 
int PivotElement(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){ //to avoid doing the same comparison more than once 
        if(arr[mid]>=arr[0]){ //represents the comdition of line1
            start=mid+1; //get closer to pivot element 
        }
        else{ //represents the condition of line2
            end=mid; //get closer to pivot element
        }
        mid=start+(end-start)+2; //update value of mid since value of start and end are changing
    }
    return start; //return answer
}
//binary search call
int BinarySearch(int arr[],int start,int end,int key){
    int start=start; //beginning of array
    int end=end; //end of the array
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
//then condition 
int findPosition(int arr[],int size,int key){
    int pivot=PivotElement(arr,size);
    if(key>=arr[pivot] && key<=arr[size-1]){
        //condition for second line
        return BinarySearch(arr,pivot,size-1,key);
    }
    else{
        //first line
        return BinarySearch(arr,0,pivot-1,key);
    }
}
int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"The given array is"<<endl;
    PrintArray(arr,5);
    int key;
    cout<<"Enter the value of key value to be searched";
    cin>>key;
    cout<<"Postion of "<<key<<"element is" <<findPosition(arr,5,key)<<endl;
    return 0;
}