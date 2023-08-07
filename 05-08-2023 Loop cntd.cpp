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

// Take a number input and reverse it
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

//Take a number input. Make a new number by using the squares of every digit. for example if the number input is 1234. output should be 14916
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

// Do above without reversing the number
#include <iostream>
using namespace std;
int main()
{
    int number, temp, newNumber = 0;
    cout << "Enter an integer: ";
    cin >> number;
    for (int i = number; i != 0; i /= 10)
    {
        temp = i % 10;
        newNumber = newNumber * 100 + temp * temp;
    }
    cout << newNumber << endl;
    return 0;
}

//_______________

//Nested Loops : A loop inside another loop is called a nested loop. The inner loop is executed fully when outer loop is executed once. For each execution of outer loop, the inner loop is executed completely.

//Patterns using nested loops

//print square using stars
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) //outer loop
    {
        for (int j = 1; j <= n; j++) //inner loop
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

