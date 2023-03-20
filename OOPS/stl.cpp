#include <iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int size;
    int x;
    cin>>size;
    cin>>x;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin>>a[size];
    }
    sort(a,a+size);
    reverse(a,a+size);
    binary_search(a,a+size,x);
    count(a,a+size,x);
    *max_element(a,a+size,x);
    *min_element(a,a+size,x);
    vector<int> vec(5);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    return 0;
}


