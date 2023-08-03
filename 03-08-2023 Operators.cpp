// Operators

/*
operators are used to perform operations on variables and values.
operators are of these types:
1. Arithmetic Operators : +, -, *, /, %, ++, --
2. Comparison Operators / Relational Operators : ==, !=, >, <, >=, <=
3. Assignment Operators : =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
4. Logical Operators : &&, ||, !
5. Bitwise Operators : &, |, ^, ~, <<, >>
6. Misc Operators : sizeof(), condition ? X : Y, , .*, ->*, ., ->, (type), new, delete

We also categorise operators into 3 types:
1. Unary Operators : ++, --, -, *, &, !, sizeof()
2. Binary Operators : +, -, *, /, %, =, ==, !=, >, <, >=, <=, &&, ||, &, |, ^, ~, <<, >>, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=, []
3. Ternary Operators : condition ? X : Y
*/


//____________ 

// 1. Arithmetic Operators
#include <iostream>
using namespace std;
int main()
{
    int a = 8, b = 3;
    // Addition
    cout << "a + b = " << a + b << endl;
    // Subtraction
    cout << "a - b = " << a - b << endl;
    // Multiplication
    cout << "a * b = " << a * b << endl;
    // Division
    cout << "a / b = " << a / b << endl;
    // Modulus
    cout << "a % b = " << a % b << endl;
    // Increment
    cout << "a++ = " << a++ << endl;
    cout << "Now a = " << a << endl;
    // Decrement
    cout << "b-- = " << b-- << endl;
    cout << "Now b = " << b << endl;
    return 0;
}

//____________

/*
Increment and Decrement Operators:

++a or --a is called pre-increment or pre-decrement
It first increments or decrements the value of a and then returns the value of a.

a++ or a-- is called post-increment or post-decrement
It first returns the value of a and then increments or decrements the value of a.
*/

//____________

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "a++ = " << a++ << endl; // a gets printed first and then gets incremented
    cout << "Now a = " << a << endl; // a is now 11
    cout << "++a = " << ++a << endl; // a gets incremented first and then gets printed
    cout << "Now a = " << a << endl; // a is now 12
    cout << "a-- = " << a-- << endl; // a gets printed first and then gets decremented
    cout << "Now a = " << a << endl; // a is now 11
    cout << "--a = " << --a << endl; // a gets decremented first and then gets printed
    cout << "Now a = " << a << endl; // a is now 10
    return 0;
}

//____________
