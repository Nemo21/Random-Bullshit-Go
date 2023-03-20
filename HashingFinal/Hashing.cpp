#include <iostream>
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
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch here
        cout << hash[number];
    }
    return 0;
}