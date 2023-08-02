// Different data types
/*
Integer:

int data type is used to store whole numbers. It takes 4 bytes of memory.
The range of an int is from -2,147,483,648 to 2,147,483,647.
Character:

The char data type is used to store a single character and takes 1 byte of memory.
It has a range of -128 to 127, and it can represent characters like 'A' (ASCII value 65) and 'b' (ASCII value 98).
Float:

The float data type is used to store decimal numbers and takes 4 bytes of memory.
It can provide accurate results up to 7 decimal places.
Example: float x = 10.67;
Double:

The double data type takes 8 bytes of memory and is used to store larger decimal numbers.
It can provide accurate results up to 15 decimal places.
Boolean:

The bool data type is used to store Boolean values, representing true or false.
It also takes 1 byte of memory, with 1 representing true and 0 representing false.
Void:

The void data type represents a valueless entity and is often used for functions that do not return a value.
Wide Character:

The wchar_t data type is used to store characters, similar to char, but with a larger size.
It typically takes 2 to 4 bytes of memory, depending on the implementation.
*/

#include <iostream>
using namespace std;
int main()
{
    int myNum = 5;             // Integer (whole number without decimals)
    float myFloatNum = 5.99;   // Floating point number (with decimals)
    double myDoubleNum = 9.98; // Floating point number (with decimals)
    char myLetter = 'D';       // Character
    bool myBoolean = true;     // Boolean (true or false)
    string myText = "Hello";   // String (text)
    cout << "int: " << myNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    cout << "double: " << myDoubleNum << "\n";
    cout << "char: " << myLetter << "\n";
    cout << "bool: " << myBoolean << "\n";
    cout << "string: " << myText << "\n";
    return 0;
}

//____________

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double myDoubleNum = 5.12345678987;
    float myFloatNum = 5.12345678987;
    cout << setprecision(5); // using setprecision() to set the number of decimal places
    cout << "double: " << myDoubleNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    return 0;
}

//____________

#include <iostream>
using namespace std;
int main()
{
    // The sizeof operator returns the number of bytes (storage size) of its operand.
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    return 0;
}

//____________

#include <iostream>
#include <limits>
using namespace std;
int main()
{
    cout << INT_MIN << endl;
    cout << INT_MAX << endl;
    cout << CHAR_MIN << endl;
    cout << CHAR_MAX << endl;
    return 0;
}