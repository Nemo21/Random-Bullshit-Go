#include <iostream>
#include <vector>
using namespace std;
void merge2array(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> nums3(m+n,0);
    int i = 0;
    int j = 0;
    int k = 0;
    if(n==0){
        return;
    }
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            nums3[k] = nums1[i];
            k++;
            i++;
        }
        else
        {
            nums3[k] = nums2[j];
            k++;
            j++;
        }
    }
    // length of first array is bigger than length of second array
    while (i < m)
    {
        nums3[k] = nums1[i];
        k++;
        i++;
    }
    // length of second array is bigger than length of first array
    while (j < n)
    {
        nums3[k] = nums2[j];
        k++;
        j++;
    }
    nums1=nums3;
}
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // length of first array is bigger than length of second array
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    // length of second array is bigger than length of first array
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);

    return 0;
}