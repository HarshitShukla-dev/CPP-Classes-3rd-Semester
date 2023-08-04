// Statements

/*
Conditional Statements : These statements are used to execute a part of code only if a condition is true. There are 4 types of conditional statements in C++.
1. if
2. if else
3. if else ladder
4. switch

Jump Statements : These statements are used to transfer the control of the program to a specific line of code. There are 4 types of jump statements in C++.
1. break
2. continue
3. goto
4. return
*/

//_________________

// Following is how to take input and print output in C++
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c; // input 3 integers separated by space
    cout << a << " " << b << " " << c;
    return 0;
}

//____________________

// if statement
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0) // checks if the number is positive
    {
        cout << "You entered a positive integer: " << number << endl; // executes if number is positive
    }
    if (number < 0) // checks if the number is negative
    {
        cout << "You entered a negative integer: " << number << endl; // executes if number is negative
    }
    if (number == 0) // checks if the number is equal to 0
    {
        cout << "You entered 0." << endl; // executes if number is 0
    }
    return 0;
}