#include <iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int FindUniqueElement(int arr[],int size){
    int ans=0;
    //if array is 1 1 3 6 5 6 5 
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    //ans is 3
    return ans;
}
int main(){
    int arr[12];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    FindUniqueElement(arr,size);
    PrintArray(arr,size);
    
    return 0;
}