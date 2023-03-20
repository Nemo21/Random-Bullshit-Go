#include <iostream>
using namespace std;
//normal function to print array
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// function to swap alternate elements 
void swapAlternate(int arr[], int size){
    //i+2 because we dont want to swap the same element so have to increment by 2
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            // to check if we are still in the array or not
            swap(arr[i],arr[i+1]);
            //then swap i and i+1th element 
        }
    }
}
int main(){
    //considered two cases of array size i.e even and odd
    int EvenArray[8]={5,2,9,4,7,6,1,0};
    int OddArray[5]={11,33,9,76,43};
    //print swapped even arrays
    swapAlternate(EvenArray,8);
    printArray(EvenArray,8);
    cout<<endl;
    //print swapped odd array
    swapAlternate(OddArray,5);
    printArray(OddArray,5);
    cout<<endl;
    return 0;
}