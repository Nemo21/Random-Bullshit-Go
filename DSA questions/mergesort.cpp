#include <iostream>
using namespace std;
//function to merge two half into one sorted data basically the merge subroutine 
void Merge(int *a,int low,int high,int mid){
    //already have low to mid sorted 
    //already have mid+1 to end sorted jus have to merge both of them 
    int i,j,k,temp[high-low+1];
    i=low;
    k=0;
    j=mid+1;
    //for the first of the subarray
    //merge the two parts into the temp array
    while(i<=mid && j<=high){ //condition that it doesnt go out of bound i.e the length of the array
    //so that left and right subarray dont get mixed up
        if(a[i]<a[j]){ //sorting the left subarray before combining
            temp[k]=a[i];
            k++;
            i++;
        }
        else{ //sorting the right subarray before combining
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    //remaining elements from 1 to mid i.e left subarray in combined array
    while(i<=mid){ //first half iteration of original array
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=high){ //second half iteration of original array
        temp[k]=a[j];
        k++;
        j++;
    }
    //to insert the sorted elements in the original array from the external space temp array
    for(i=low;i<=high;i++){
        a[i] = temp[i-low];
    }
}
void MergeSort(int *a,int low,int high){
    int mid;
    if(low<high){ //divide nd conquer i.e diving the array into halves till the point only independent elements remain
        mid=(low+high)/2;
        //split the original array into half the size 
        MergeSort(a,low,mid); //first half of the array of original size
        MergeSort(a,mid+1,high); //second half of the array of original size
        //Merge the two divided subarrays into one
        Merge(a,low,high,mid);
    }
}
int main(){ 
    int n,i;
    cout<<"\n Enter the number of data elements to be sorted: \n";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"Enter element"<<i+1<<":";
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    //Printing sorted array
    cout<<"Sorted array is";
    for(i=0;i<n;i++){
        cout<<"->"<<arr[i];
    }
    return 0;
}
