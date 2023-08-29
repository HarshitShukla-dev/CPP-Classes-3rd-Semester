/* 
Recusriion is a function calling itself. 
It is used to solve problems that can be broken down into smaller, repetitive problems.
For example, factorial of a number can be calculated using recursion as follows:
n! = n * (n-1)!
*/

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}