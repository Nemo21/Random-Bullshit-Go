#include <iostream>
using namespace std;
//Function to count the number of occurences in an array
int checkCount(int arr[],int size,int n){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            count+=1;
            arr[i]=INT_MIN;
        }
    }
    return count;
}
//Function to check if there are unique occurences
bool UniqueOccurences(int arr[],int size){
    int arr2[100];
    for(int i=0;i<size;i++){
        arr2[i]=arr[i];
    }
    int k=0;
    int count[100];
    for(int i=0;i<size;i++){
        int CountE=checkCount(arr2,size,arr[i]);
        if(CountE!=0){
            count[k]=CountE;
            k++;
        }
    }
    //Just to check the elements in the new count array(for debugging)
    for(int i=0;i<k;i++){ 
        for(int j=0;j<k;j++){
            if(i==j){
                continue;
            }
            if(count[i]==count[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=-0;i<size;i++){
        cin>>arr[i];
    }
    cout<<UniqueOccurences(arr,size);
    
    return 0;
}