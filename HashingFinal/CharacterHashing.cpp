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
    string s;
    cin >> s;
    int n = s.size();
    int hash[26] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}