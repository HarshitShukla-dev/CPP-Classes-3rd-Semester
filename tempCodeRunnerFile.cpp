#include <iostream>
using namespace std;

// program to find maximum sum of sums of all rows and columns of a matrix with that row and column index printed

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxSum = INT_MIN;
    int maxRow = 0;
    int maxCol = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }

    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxCol = j;
        }
    }

    cout << "Maximum sum is : " << maxSum << endl;
    cout << "Row index : " << maxRow << endl;
    cout << "Column index : " << maxCol << endl;

    return 0;
}