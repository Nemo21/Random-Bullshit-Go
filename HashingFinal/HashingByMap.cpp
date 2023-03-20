#include <iostream>
#include <map>
using namespace std;
void PrintArray(int arr[], int size)
{
    // print array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // precomputation
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    // iterate in map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;
}