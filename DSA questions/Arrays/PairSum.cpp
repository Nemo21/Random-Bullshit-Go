#include <iostream>
#include <vector>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int PairSum(int arr[],int size,int sum){
    vector<vector<int>> ans;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;i<size-1;i++){
            if(arr[i]+arr[j]==sum){
                if(arr[i]<arr[j]){
                    cout<<arr[i]<<" "<<arr[j];
                }
                else if(arr[i]>arr[j]){
                    cout<<arr[j]<<" "<<arr[i];
                }
            }
        }
    } //return ans 

}
int main(){
    int arr[100];
    int sum;
    int size;
    cout<<"Enter the element of array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    PrintArray(arr,size);
    cout<<"Enter the sum";
    cin>>sum;
    cout<<PairSum(arr,size,sum);
    return 0;
}