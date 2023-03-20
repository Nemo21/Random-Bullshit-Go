//Name:Bableen Saggu
//Roll no:2010990149
//Set-01
#include <iostream>
#include <bits/stdc++.h>
#include <array>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;
void findrepeat(int* arr,int n)
{
    map<int,int> ma; //map is declared
    for(int i=0;i<n;i++)
    {
        ma[arr[i]]++; //for same key value increment in frequency
    }
    cout<<"repeated number frequency\n";
    for(auto iter=ma.begin();iter!=ma.end();iter++)
    {
        if(iter->second>1) //frequency is greater than 1 , i.e a repeating element
        {
            printf("%d\t\t%d\n",iter->first,iter->second);
        }
    }
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findrepeat(arr,n);
    return 0;
}