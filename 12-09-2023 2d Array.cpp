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

        return 0;
    }