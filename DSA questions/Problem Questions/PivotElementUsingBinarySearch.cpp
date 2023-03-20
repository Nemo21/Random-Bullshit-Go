#include <iostream>
using namespace std;
//normal printing array fxn
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//finding pivot element here considering the minimum element 
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
int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"The given array is"<<endl;
    PrintArray(arr,5);
    cout<<"Pivot element is "<<PivotElement(arr,5)<<endl;
    return 0;
}