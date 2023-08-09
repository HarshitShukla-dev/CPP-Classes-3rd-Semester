#include <iostream>
using namespace std;

int Factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= num;
    }
    return fact;
}

int main()
{
    int n, r, ncr;
    cout << "Enter n and r: ";
    cin >> n >> r;
    ncr = Factorial(n) / (Factorial(r) * Factorial(n - r));
    cout << "nCr = " << ncr << endl;
    return 0;
}