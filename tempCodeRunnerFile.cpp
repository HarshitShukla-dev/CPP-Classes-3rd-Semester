#include <iostream>
using namespace std;
int main()
{
    int number, temp, newNumber = 0;
    cout << "Enter an integer: ";
    cin >> number;
    while (number != 0)
    {
        temp = number % 10;
        newNumber = newNumber * 100 + temp * temp;
        number /= 10;
    }
    cout << newNumber << endl;
    return 0;
}