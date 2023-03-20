#include <iostream>
using namespace std;
void PrintArray(int arr[],int size){
    //print array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //declare array
    int number[9]={1,2,3,4,5,6,7,8};
    //accessing array
    cout<<number[7];
    //size of array
    int n=9;
    //printing the array
    PrintArray(number,n);
    //inititalising an array
    int secondarray[5]={2,3,5,6};
    //Accessing the element 
    cout<<secondarray[3]<<endl;
    //size of array
    int n=4;
    //printing the array
    PrintArray(secondarray,n);
    //Inititalising the array
    int third[4]={4,5,6,1};
    //Size of arrray
    int n=4;
    //Printing the array
    //size of array
    int n=9;
    //printing the array
    PrintArray(third,n);
    return 0;
}