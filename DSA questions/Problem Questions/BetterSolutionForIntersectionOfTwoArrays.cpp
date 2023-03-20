#include <iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//note that both the arrays are in non decreasing order
//using two pointer approach
int IntersectionOfTwoArrays(int arr1[],int arr2[],int size1,int size2){
    int i=0,j=0;
    int ans; //size 1 is of arr1 and size 2 is of arr2
    while(i<size1 && j<size2){
        //element in arr1 is equal to element inarr2 
        if(arr1[i]==arr2[j]){
            //put ith element in answer 
            ans=arr1[i];
            i++; //move to next element in first array
            j++; //move to next element in second array
        }
        //element in arr1 is lesser than element in arr2 
        else if(arr1[i]<arr2[j]){
            i++; //move to next element in first array 
        }
        else{ //element in arr1 is greater than element in arr2
            j++; //move to next element in second array
        }
    } //returning ans
    return ans;
}
int main(){
    int arr1[100];
    int arr2[100];
    int size1;
    int size2;
    cout<<"Enter size of array1"<<endl;
    cin>>size1;
    cout<<"Enter size of array2"<<endl;
    cin>>size2;
    cout<<"Note that the arrays should be in non decreasing order"<<endl;
    cout<<"Enter array1"<<endl;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Array1 is"<<" ";
    PrintArray(arr1,size1);
    cout<<endl;
    cout<<"Enter array2"<<endl;
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    cout<<endl;
    cout<<"Array2 is"<<" ";
    PrintArray(arr2,size2);
    cout<<"Intersection is"<< IntersectionOfTwoArrays(arr1,arr2,size1,size2);
    return 0;
}