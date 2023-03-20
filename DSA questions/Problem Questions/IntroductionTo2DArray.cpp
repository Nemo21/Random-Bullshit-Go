#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
void rotateArray(int matrix[][20])
{

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = n - 1;
        while (low < high)
        {
            swap(matrix[i][low], matrix[i][high]);
            low++;
            high--;
        }
    }
}
bool searchelement(int arr[][5], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
void prinrowwisesum(int arr[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum;
    }
    cout << endl;
}
int largestrowsum(int arr[][5], int row, int col)
{
    int maxi = INT_MIN;
    int rowindex = -1;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum;
        if (sum > maxi)
        {
            sum = maxi;
            rowindex = row;
        }
    }
    cout << sum << endl;
    return rowindex;
}
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int total = row * col;
    int count = 0;
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;
    while (count < total) // vo matrix me hai
    {
        // phele print starting row
        for (int index = startingcol; count < total && index <= endingcol; index++)
        {
            // cout<<matrix[startingrow][index];
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;
        // then print ending col
        for (int index = startingrow; count < total && index <= endingrow; index++)
        {
            // cout<<matrix[index][endingcol];
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;
        // then ending row
        for (int index = endingcol; count < total && index >= startingcol; index--)
        {
            // cout<<matrix[endingrow][index];
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;
        // then starting col
        for (int index = endingrow; count < total && index >= startingrow; index--)
        {
            // cout<<matrix[index][startingcol];
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
}
int main()
{
    int row;
    int col;
    int target;
    cin >> row;
    cin >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Element to search" << endl;
    cin >> target;
    if (searchelement(arr, target, row, col))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

/*
given a sq matrix, rotate the 2d array by 90


*/