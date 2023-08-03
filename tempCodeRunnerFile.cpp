
#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4, result;
    // Ternary operator
    result = (a < b) ? a : b; // If a is greater than b, then c = a else c = b
    cout << "result = " << result << endl;
    return 0;
}