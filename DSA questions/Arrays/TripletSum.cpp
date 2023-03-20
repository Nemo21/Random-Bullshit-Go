#include <iostream>
using namespace std;
int TripletSum(int arr[],int size,int sum){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size-1;j++){
            for(int k=j+1;k<size-1;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                }
            }
        }
    }
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter the value of size of array";
    cin>>size;
    cout<<"Enter the elements in array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int sum;
    cout<<"Enter the value of sum";
    cin>>sum;    
    TripletSum(arr,size,sum);
    return 0;
}