// Object Oriented Programming
/*
object is a real world entity which has state and behavior.
class is a blueprint of an object.
class is a user defined data type.
class is a collection of objects.
class is a logical entity.
class is a template.
class is a group of objects with common properties.
class is a group of objects with common behavior.
class is a group of objects with common state.
*/

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNumber;
    int age;
};

int main()
{
    Student s1, s2;
    s1.rollNumber = 20;
    s1.age = 24;

    cout << s1.rollNumber << endl;
    cout << s1.age << endl;

    return 0;
}

// Acess Specifiers : Public, Private, Protected
// Public : Accessible to all
// Private : Accessible to class members only
// Protected : Accessible to class members and derived class members only

// this-> : this is a keyword which is a pointer which points to the current object.
// this->rollNumber = rollNumber;
// this->age = age;

// Constructor : Constructor is a special member function which has same name as that of class name.
// Constructor is used to initialize the data members of a class.