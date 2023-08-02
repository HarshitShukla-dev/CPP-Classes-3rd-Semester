#include <iostream>
using namespace std;
int main()
{
    double myDoubleNum = 5.12345678987;
    float myFloatNum = 5.12345678987;
    cout << setprecision(9) << fixed;
    cout << "double: " << myDoubleNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    return 0;
}