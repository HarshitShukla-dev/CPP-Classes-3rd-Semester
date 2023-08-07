#include <iostream>
using namespace std;
int main()
{
    int number, temp, sumEven = 0, sumOdd = 0;
    cout << "Enter an integer: ";
    cin >> number;
    while (number != 0)
    {
        temp = number % 10;
        if (temp % 2 == 0)
        {
            sumEven += number % 10;
        }
        else
        {
            sumOdd += number % 10;
        }
        number /= 10;
    }
    cout << "Sum of even digits: " << sumEven << endl;
    cout << "Sum of odd digits: " << sumOdd << endl;
    return 0;
}