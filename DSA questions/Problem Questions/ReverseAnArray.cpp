#include <iostream>
#include <vector>
using namespace std;
void printarray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// this is reversing the whole array (here m=0)
vector<int> reverse(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}
// for reversing from point "m" to the rest, from m means m+1th index
vector<int> reverse1(vector<int> &arr, int m)
{
    int start = m + 1;
    int end = arr.size() - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}
int main()
{
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(23);
    vec.push_back(6);
    vec.push_back(3);
    printarray(vec);
    cout << "After reverse" << endl;
    vector<int> ans = reverse(vec);
    printarray(ans);

    return 0;
}