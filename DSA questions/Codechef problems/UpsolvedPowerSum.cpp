#include<bits/stdc++.h> 
#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int length;
        cin>>length;
        int Sequence[length];
        int SequenceSum=0;
        int MinimumValue=INT_MAX;
        int Index=0;
        for(int i=0;i<length;i++){
            cin>>Sequence[i]; //input elements of sum
            SequenceSum+=Sequence[i]; //sum of all elements
            if(Sequence[i]<MinimumValue){
                MinimumValue=Sequence[i]; //what is the minimum value in the index
                Index=i; //minimum value at what index
            }
        }
        int PowerOfSum=log2(SequenceSum); //calculate which power of 2 is sum
        int DifferenceOfNextPowerOf2AndSumOfSequence=pow(2,PowerOfSum+1)-SequenceSum;
        //difference to accomodate in the minimum value of the array 
        if(SequenceSum==pow(2,PowerOfSum)){
            //no need to do anything , since already a "good" sequence
        }
        else{
            cout<<"1"<<endl;
            cout<<"1"<<" "<<(DifferenceOfNextPowerOf2AndSumOfSequence/MinimumValue)+1<<endl; 
            //for eg: 4(firstcount)+ 16(which is 4(second)+4(third)+4(fourth)+4(fifth))=20
            cout<<Index+1<<endl;
            //index at which we are accomodating 
        }
    }
    return 0;
}