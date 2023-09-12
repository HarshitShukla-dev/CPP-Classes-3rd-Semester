#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) // Row
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        cout << "Sum of " << i << " row is " << sum << endl;
    }
}