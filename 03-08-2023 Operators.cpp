// Operators

/*
operators are used to perform operations on variables and values.
operators are of these types:
1. Arithmetic Operators : +, -, *, /, %, ++, --
2. Comparison Operators / Relational Operators : ==, !=, >, <, >=, <=
3. Logical Operators : &&, ||, !
4. Bitwise Operators : &, |, ^, ~, <<, >>
5. Assignment Operators : =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
6. Ternary Operators : condition ? X : Y
7. Misc Operators : sizeof(), &, *, ?:, ., ->, Cast, Comma


We also categorise operators into 3 types:
1. Unary Operators : ++, --, -, *, &, !, sizeof()
2. Binary Operators : +, -, *, /, %, =, ==, !=, >, <, >=, <=, &&, ||, &, |, ^, ~, <<, >>, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=, []
3. Ternary Operators : condition ? X : Y
*/

//____________

// 1. Arithmetic Operators

/*
Arithmetic operators are used to perform arithmetic operations on variables and values.
*/

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

// 2. Comparison Operators / Relational Operators

/*
Comparison operators are used to compare two values.
It returns either true or false according to the condition in the form of 1 or 0 where 1 means true and 0 means false.
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4;
    // Equal to
    cout << "a == b = " << (a == b) << endl;
    // Less than
    cout << "a < b = " << (a < b) << endl;
    // Greater than
    cout << "a > b = " << (a > b) << endl;
    // Less than or equal to
    cout << "a <= b = " << (a <= b) << endl;
    // Greater than or equal to
    cout << "a >= b = " << (a >= b) << endl;
    // Not equal to
    cout << "a != b = " << (a != b) << endl;
    return 0;
}

//____________

// 3. Logical Operators

/*
Logical operators are used to combine conditional statements.
It returns either true or false according to the condition in the form of 1 or 0 where 1 means true and 0 means false.

&& : Logical AND - Returns true if both the conditions are true
|| : Logical OR - Returns true if any one of the conditions is true
! : Logical NOT - Returns true if the condition is false and vice versa
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4;
    // Logical AND
    cout << "a && b = " << (a && b) << endl;
    // Logical OR
    cout << "a || b = " << (a || b) << endl;
    // Logical NOT
    cout << "!b = " << (!b) << endl;
    return 0;
}

//____________

// 4. Bitwise Operators

/*
Bitwise operators are used to perform operations on individual bits.

& : Bitwise AND - Sets each bit to 1 if both bits are 1 else 0
| : Bitwise OR - Sets each bit to 1 if any of the bits is 1 else 0
^ : Bitwise XOR - Sets each bit to 1 if only one of the bits is 1 else 0
~ : Bitwise NOT - Inverts all the bits
<< : Bitwise Left Shift - Shifts the bits of the number to the left and fills 0 on the rightmost bits
>> : Bitwise Right Shift - Shifts the bits of the number to the right and fills 0 on the leftmost bits
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4;
    // Bitwise AND
    cout << "a & b = " << (a & b) << endl;
    // Bitwise OR
    cout << "a | b = " << (a | b) << endl;
    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl;
    // Bitwise Left Shift
    cout << "a << 1 = " << (a << 1) << endl;
    // Bitwise Right Shift
    cout << "a >> 1 = " << (a >> 1) << endl;
    // Bitwise NOT
    cout << "~a = " << (~a) << endl;
    return 0;
}

//____________

// 5. Assignment Operators

/*
Assignment operators are used to assign values to variables.

= : Assigns the value of the right side operand to the left side operand
+= : Adds the value of the right side operand to the left side operand and assigns the result to the left side operand
-= : Subtracts the value of the right side operand from the left side operand and assigns the result to the left side operand
*= : Multiplies the value of the right side operand with the left side operand and assigns the result to the left side operand
/= : Divides the value of the left side operand by the right side operand and assigns the result to the left side operand
%= : Divides the value of the left side operand by the right side operand and assigns the remainder to the left side operand
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4;
    // Assignment
    cout << "a = " << a << endl;
    // Addition assignment
    cout << "a += b = " << (a += b) << endl;
    // Subtraction assignment
    cout << "a -= b = " << (a -= b) << endl;
    // Multiplication assignment
    cout << "a *= b = " << (a *= b) << endl;
    // Division assignment
    cout << "a /= b = " << (a /= b) << endl;
    // Modulus assignment
    cout << "a %= b = " << (a %= b) << endl;
    return 0;
} 

//____________

// 6. Ternary Operator

/*
Ternary operator is used to replace if-else statement in a single line.

Syntax:
(condition) ? expression1 : expression2;
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 6, b = 4, c;
    // Ternary operator
    c = (a > b) ? a : b; // If a is greater than b, then c = a else c = b
    cout << "c = " << c << endl;
    return 0;
}