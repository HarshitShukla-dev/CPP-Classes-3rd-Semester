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
    return 0;
}