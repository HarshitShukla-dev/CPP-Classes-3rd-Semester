// Destructor : It is a special member function of a class which is executed automatically when an object of the class goes out of scope.

#include <iostream>
using namespace std;

class Student
{
    int rollNumber;
    int marks;

public:
    Student() // Constructor
    {
        cout << "Constructor 1 called" << endl;
    }
    ~Student() // Destructor
    {
        cout << "Destructor 1 called" << endl;
    }
};

int main()
{
    Student s1, s2, s3;

    return 0;
}