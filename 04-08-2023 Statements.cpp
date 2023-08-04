// Statements

/*
Conditional Statements
1. if
2. if else
3. if else ladder
4. switch

Jump Statements
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
    return 0;
}