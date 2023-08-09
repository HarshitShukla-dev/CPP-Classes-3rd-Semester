// Functions
/*
Functions in C++ are used to divide a big program into small parts. It makes the program more manageable and organized. It also avoids repetition and makes the code reusable. Functions in C++ are also known as methods or procedures.

There are two types of functions in C++: library functions and user-defined functions.

Library functions are the functions which are already defined in C++ libraries like iostream, math, string, etc. We just need to include the header file of the library in which the function is defined and call the function to use it.

User-defined functions are the functions which are created by the user at the time of writing the program. These functions are created to perform some specific tasks. We can create user-defined functions according to our requirements.
*/

//______________

// Calculating nCr using function

#include <iostream>
using namespace std;

int Factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= num;
    }
    return fact;
}

int main()
{
    int n, r, ncr;
    cout << "Enter n and r: ";
    cin >> n >> r;
    ncr = Factorial(n) / (Factorial(r) * Factorial(n - r));
    cout << "nCr = " << ncr << endl;
    return 0;
}

//______________

#include <iostream>
using namespace std;
void B()
{
    cout << 3;
}
void A()
{
    B();
    cout << 2;
}
int main()
{
    A();
    cout << 1;
    return 0;
}