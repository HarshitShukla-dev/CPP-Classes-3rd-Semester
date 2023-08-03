#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4;
    // Bitwise AND
    cout << "a & b = " << (a & b) << endl;
    // Bitwise OR
    cout << "a | b = " << (a | b) << endl;
    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl;
    // Bitwise Left Shift
    cout << "a << 2 = " << (a << 2) << endl;
    // Bitwise Right Shift
    cout << "a >> 2 = " << (a >> 2) << endl;
    // Bitwise NOT
    cout << "~a = " << (~a) << endl;
    return 0;
}