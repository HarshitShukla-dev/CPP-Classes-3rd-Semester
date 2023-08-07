// Take a number input. Print the sum of odd and even digits of that number.
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

// do above using for loop
#include <iostream>
using namespace std;
int main()
{
    int number, sumEven = 0, sumOdd = 0;
    cout << "Enter an integer: ";
    cin >> number;
    for (int i = number; i != 0; i /= 10)
    {
        if ((i % 10) % 2 == 0)
        {
            sumEven += i % 10;
        }
        else
        {
            sumOdd += i % 10;
        }
    }
    cout << "Sum of even digits: " << sumEven << endl;
    cout << "Sum of odd digits: " << sumOdd << endl;
    return 0;
}