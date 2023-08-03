#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4;
    // Assignment
    cout << "a = " << a << endl;
    // Addition assignment
    cout << "a += b = " << (a += b) << endl;
    // Subtraction assignment
    cout << "a -= b = " << (a -= b) << endl;
    // Multiplication assignment
    cout << "a *= b = " << (a *= b) << endl;
    // Division assignment
    cout << "a /= b = " << (a /= b) << endl;
    // Modulus assignment
    cout << "a %= b = " << (a %= b) << endl;
    return 0;
}