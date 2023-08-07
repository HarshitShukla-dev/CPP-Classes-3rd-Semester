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