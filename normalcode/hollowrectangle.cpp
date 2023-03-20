/* C++ program to print hollow rectangle star pattern */
#include <iostream>
using namespace std;
/* Function to print hollow rectangle*/
void hollow_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {   /* print only in first and last row nd col*/
            if (i==1 || i==n || j==1 || j==m)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, columns;
    cout << "nEnter the number of rows : ";
    cin >> rows;
    cout << "nEnter the number of columns : ";
    cin >> columns;
    cout << endl;
    hollow_rectangle(rows, columns);
    return 0;
}