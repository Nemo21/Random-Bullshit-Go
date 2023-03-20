#include <iostream>
using namespace std;
void PrintArray(int arr[],int size){
    //print array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};
    reverse(arr,6);
    reverse(brr,5);
    PrintArray(arr,6);
    PrintArray(brr,5);
    return 0;
}