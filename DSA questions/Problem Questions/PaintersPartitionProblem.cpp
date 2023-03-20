#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &boards, int n ,int k,int mid){
    int paintercount=1;
    int boardsum=0;
    for(int i=0;i<n;i++){
        if(boardsum+boards[i]<=mid){
            boardsum+=boards[i];
        }
        else{
            paintercount++;
            if(paintercount>k || boards[i]>mid){
                return false;
            }
            boardsum=boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int n=boards.size();
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int end=sum;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(isPossible(boards,n,k,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    
    return 0;
}