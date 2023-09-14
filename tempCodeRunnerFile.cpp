#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    stack<int> s;
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            s.push(arr[i]);
            n++;
        }
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x = s.top();
        if (x % 4 == 0)
        {
            sum += x;
        }
        s.pop();
    }
    cout << "Sum: " << sum << endl;
    return 0;
}