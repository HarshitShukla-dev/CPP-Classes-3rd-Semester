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

// if statement : It is used to execute a block of code only if a condition is true. It is the simplest type of conditional statement. We use it when we want to execute a block of code only if a condition is true.

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

//____________________

// if else statement : if the condition is true, then the if block of code is executed, otherwise else block of code is executed. It is used when we have to choose between two alternatives.

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number >= 0) // checks if the number is positive
    {
        cout << "You entered a positive integer: " << number << endl;
    }
    else // executes if number < 0
    {
        cout << "You entered a negative integer: " << number << endl;
    }
    return 0;
}

//____________________

// Taking input and checking odd or even using if else

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number % 2 == 0) // checks if the number is even
    {
        cout << "You entered an even integer: " << number << endl;
    }
    else // executes if the number is odd
    {
        cout << "You entered an odd integer: " << number << endl;
    }
    return 0;
}

//____________________

// if else ladder : It is used when we have to choose between multiple alternatives. It is a combination of if else statements. The if block of code is executed if the condition is true, otherwise the else if block of code is executed. If none of the conditions is true, then the else block of code is executed. There can be any number of else if blocks of code.

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0) // checks if the number is positive
    {
        cout << "You entered a positive integer: " << number << endl;
    }
    else if (number < 0) // checks if the number is negative
    {
        cout << "You entered a negative integer: " << number << endl;
    }
    else // if both test expression is evaluated to false
    {
        cout << "You entered 0." << endl;
    }
    return 0;
}

//____________________

// Taking input and giving grades using if else ladder : We will take input of marks and print the grade according to the marks.

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 91 && marks <= 100)
    {
        cout << "A" << endl;
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << "B" << endl;
    }
    else if (marks >= 70 && marks <= 80)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "D" << endl;
    }
    return 0;
}

//____________________