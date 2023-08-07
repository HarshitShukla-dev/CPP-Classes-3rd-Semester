#include <iostream>
using namespace std;
int main()
{
    int number, temp, reverse = 0;
    cout << "Enter an integer: ";
    cin >> number;
    while (number != 0)
    {
        temp = number % 10;
        reverse = reverse * 10 + temp;
        number /= 10;
    }
    cout << reverse << endl;
    return 0;
}