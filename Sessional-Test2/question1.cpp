//Name:Bableen Saggu
//Roll no:2010990149
//Set-01
#include <iostream>
#include <array>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;
void findnonrepeat(int* arr,int n)
{
    //unordered map declared
    unordered_map<int,int> ma;
    for(int i=0;i<n;i++)
    {
        ma[arr[i]]++; //for same key value increment in frequency
    }
    cout<<"Non-repeated numbers are: ";
    for(auto iter=ma.begin();iter!=ma.end();iter++)
    {
        if(iter->second==1) //means frequency is 1 i.e unique non repeating element
        {
            printf("%d",iter->first,","); //print key of of that frequency one
        }
    }
}
int main(){
    int n;
    cin>>n;
    int* arr=(int*)(malloc(sizeof(int)*n)); //array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; //input
    }
    findnonrepeat(arr,n);
    return 0;
}