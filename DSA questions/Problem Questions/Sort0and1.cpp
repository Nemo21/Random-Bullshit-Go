#include <iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Sort0and1(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++; 
        }
        while(arr[right]==1&& left<right){
            right--;
        }
        // means left has all 1s and right has all 0s
        if(left<right){
            int temp;
            temp=arr[right];
            arr[right]=arr[left];
            arr[left]=temp; 
            left++;
            right--;
        }
    }
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};
    Sort0and1(arr,8);
    PrintArray(arr,8);
    return 0;
}