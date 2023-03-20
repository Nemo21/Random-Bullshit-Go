#include <iostream>
#include <vector>
using namespace std;
void PrintArray(vector<int> v1, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}

vector<int> prefixsum(vector<int> v1)
{
    vector<int> prefixsumm;
    prefixsumm[0] = v1[0];
    for (int i = 1; i < v1.size(); i++)
    {
        prefixsumm[i] += v1[i];
    }
    return prefixsumm;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    prefixsum(v1);
    PrintArray(v1, n);
    return 0;
}