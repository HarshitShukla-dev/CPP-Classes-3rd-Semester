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