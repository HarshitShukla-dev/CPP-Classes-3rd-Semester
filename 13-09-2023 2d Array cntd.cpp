// program to traverse in a user defined 2d array and if a zero is found at any index position, we have to conevrt that whole row and column to zero

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int row[n] = {0};
    int col[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (row[i] == 1)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (col[i] == 1)
        {
            for (int j = 0; j < n; j++)
            {
                arr[j][i] = 0;
            }
        }
    }
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

//______________

#include <vector>
#include <algorithm>

void setZeroes(std::vector<std::vector<int>> &mat)
{
    int rows = mat.size(), cols = mat[0].size();

    bool col0 = false;
    for (int i = 0; i < rows; i++)
    {
        if (mat[i][0] == 0)
        {
            col0 = true;
        }
        for (int j = 1; j < cols; j++)
        {
            if (mat[i][j] == 0)
            {
                mat[i][0] = mat[0][j] = 0;
            }
        }
    }

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 0; j--)
        {
            if (mat[i][0] == 0 || mat[0][j] == 0)
            {
                mat[i][j] = 0;
            }
            if (col0)
            {
                mat[i][0] = 0;
            }
        }
    }
}

//______________