#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{  //normal approach
    for(int i=1;i<n;i++){
        //for number of rounds 1 to n-1
        for(int j=0;j<n-i;j++){
            //comparing j,j+1 element till n-i
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }     
    //a bit optimised approach
    for(int i=1;i<n;i++){
        //for number of rounds 1 to n-1
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            //comparing j,j+1 element till n-i
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            
        }
    }   
}
int main(){

}
