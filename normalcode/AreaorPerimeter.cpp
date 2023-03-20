#include <iostream>
using namespace std;
int main()
{
    int L, B, Area, Peri;
    cin >> L >> B;
    Area = L * B;
    Peri = 2 * (L + B);
    if (Peri > Area)
    {
        cout << "Peri" << endl;
        cout << Peri;
    }
    else if (Area > Peri)
    {
        cout << "Area" << endl;
        cout << Area;
    }
    else
    {
        cout << "Eq" << endl;
    }

    return 0;
}