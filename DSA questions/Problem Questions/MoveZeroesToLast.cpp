#include <iostream>
#include<vector>
using namespace std;
//moves all the zeroes to the right of the array
void moveZeroes(int arr[]){
    int i=0;
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<arrsize;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    
    
    return 0;
}