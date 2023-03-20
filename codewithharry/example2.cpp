#include<iostream>
using namespace std;
int main()
{
    int i,j,n,loc,temp,min,a[30];
    // n is the number of elements 
    //temp is the temporary storage 
    //loc is the location of temporary storage
    // min is the element that is to compared by each element of the array in every iteration 
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i]; //input of all array elements of length n array
    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j]; //checking that element is less than the element assumed to be the lowest 
                loc=j; // after each iteration change of location 
            }
        }
 
        temp=a[i]; //interchange of location 
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "; //printing sorted array 
    }
    return 0;
}