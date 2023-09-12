/*
2d Array : 2d array is a collection of 1d array. It is also known as matrix. It is Array inside Array.
Syntax : data_type array_name[row_size][column_size];
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 0, 1, 2}};

    // Printing 2d Array
    for (int i = 0; i < 3; i++) // Row
    {
        for (int j = 0; j < 4; j++) // Column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//_________________________

#include <iostream>
using namespace std;

int main()
{
    // n = row, m = column
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    // Taking input in 2d Array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing 2d Array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//_________________________

#include <iostream>
using namespace std;

int main()
{
    // n = row, m = column
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    // Taking input in 2d Array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing 2d Array using pointer
    for (int i = 0; i < n; i++)
    {
        // arr[i][j] == *(*(arr+i)+j)
        for (int j = 0; j < m; j++)
        {
            cout << *(*(arr + i) + j) << " ";
        }
    }

    return 0;
}

//_________________________

#include <iostream>
using namespace std;

int main()
{
    // n = row, m = column
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    // Taking input in 2d Array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing 2d Array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "row : " << i << " column : "
                 << " " << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//_________________________

#include <iostream>
using namespace std;

int main()
{
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

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << "sum of " << i + 1 << " row is : " << sum << endl;
    }
}

//_________________________

// Printing a 2d Array in Column Wise

#include <iostream>
using namespace std;

int main()
{
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

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}

//_________________________

#include <iostream>
using namespace std;

int main()
{
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

    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        cout << "sum of " << j + 1 << " column is : " << sum << endl;
    }

    return 0;
}

//_________________________

// program to find maximum sum of sums of all rows and columns of a matrix with those rows and columns index printed

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    int maxSum = INT_MIN;
    int maxRows[100];
    int maxCols[100];
    int maxRowCount = 0;
    int maxColCount = 0;

    // Calculate the sum of each row and find the maximum
    for (int i = 0; i < n; ++i)
    {
        int rowSum = 0;
        for (int j = 0; j < m; ++j)
        {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum)
        {
            maxSum = rowSum;
            maxRowCount = 1;
            maxRows[0] = i;
        }
        else if (rowSum == maxSum)
        {
            maxRows[maxRowCount] = i;
            maxRowCount++;
        }
    }

    // Calculate the sum of each column and find the maximum
    for (int j = 0; j < m; ++j)
    {
        int colSum = 0;
        for (int i = 0; i < n; ++i)
        {
            colSum += matrix[i][j];
        }
        if (colSum > maxSum)
        {
            maxSum = colSum;
            maxColCount = 1;
            maxCols[0] = j;
        }
        else if (colSum == maxSum)
        {
            maxCols[maxColCount] = j;
            maxColCount++;
        }
    }

    cout << "Maximum sum: " << maxSum << endl;
    cout << "Indices of the maximum sum:" << endl;

    for (int i = 0; i < maxRowCount; ++i)
    {
        cout << "Row " << maxRows[i] << " (0-based indexing)" << endl;
    }
    for (int i = 0; i < maxColCount; ++i)
    {
        cout << "Column " << maxCols[i] << " (0-based indexing)" << endl;
    }

    return 0;
}

//_________________________

// program to make transpose of given matrix

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int transposed[m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transposed[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
