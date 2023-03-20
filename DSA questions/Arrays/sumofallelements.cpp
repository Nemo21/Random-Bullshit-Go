#include <iostream>
using namespace std;
int SumOfAll(int arr[],int size){
    int sumOf;
    for(int i=0;i<size;i++){
        sumOf=sumOf+arr[i];
    }
    return sumOf;
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=SumOfAll(arr,size);
    cout<<"sum of all elements is "<<sum<<endl;
    return 0;
}