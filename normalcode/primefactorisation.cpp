#include <iostream>
#include <array>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int primefactor(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int count = 0;
            while (n % i == 0)
            {
                n = n / i;
                count++;
            }
            cout << i << " " << count << endl;
        }
    }
    if (n != 1)
    {
        cout << n << " " << 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    primefactor(n);
    return 0;
}