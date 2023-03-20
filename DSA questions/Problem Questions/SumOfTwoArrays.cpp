#include <iostream>
#include<vector>
using namespace std;
vector<int> reversevect(vector<int> vect)
{
    int start=0;
    int end=vect.size()-1;
    while(start<end)
    {
        swap(vect[start++],vect[end--]);
    }
    return vect;
}
vector<int> SumOfTwoArrays(vector<int> &a,int n,vector<int> &b,int m)
{
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;
    //normal case where length of both arrays is similar
    while(i>=0 &j>=0)
    {
        int value1=a[i];
        int value2=b[j];
        int sum=value1+value2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //if length of first array is comparably smaller than the length of second array
    while(i>=0)
    {
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    //if length of second array is comparably smaller than the length of first array
    while(j>=0)
    {
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    //length is similar but there exists a carry at the end 
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return reversevect(ans);
}
int main(){
    
    return 0;
}