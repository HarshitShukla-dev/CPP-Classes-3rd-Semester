// #include <iostream>
// #include <string>

// using namespace std;

// class Myclass
// {
// public: // Acess specifier
//     int myNum;
//     string myString;
// };

// int main()
// {
//     Myclass myObj;

//     myObj.myNum = 20;
//     myObj.myString = "Harshit";

//     cout << "size of integer: " << sizeof(myObj.myNum) << " -> " << myObj.myNum << endl;
//     cout << "size of string: " << sizeof(myObj.myString) << " -> " << myObj.myString << endl;
//     return 0;
// }

// _____________________________

// #include <iostream>
// #include <string>

// using namespace std;

// class Car
// {
// public:
//     string brand;
//     string model;
//     int year;
// };

// int main()
// {
//     Car carobj1;
//     carobj1.brand = "BMW";
//     carobj1.model = "X8";
//     carobj1.year = 2019;

//     Car carobj2;
//     carobj2.brand = "Toyota";
//     carobj2.model = "Fortuner";
//     carobj2.year = 2020;

//     Car carobj3;
//     carobj3.brand = "Ford";
//     carobj3.model = "Mustang";
//     carobj3.year = 1990;

//     cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year << endl;
//     cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year << endl;
//     cout << carobj3.brand << " " << carobj3.model << " " << carobj3.year << endl;
// }

// ______________________

// #include <iostream>
// #include <string>

// using namespace std;

// class myClass
// {
// public:
//     void myMethod()
//     { // Function declared inside class
//         cout << "Method called";
//     }
// };

// int main()
// {
//     myClass obj;
//     obj.myMethod();
// }

// _______________________

// #include <iostream>
// #include <string>

// using namespace std;

// // Declaring the method outside of the class

// class myClass
// {
// public:
//     void myMethod();
// };

// void myClass::myMethod()
// {
//     cout << "Method called";
// }

// int main()
// {
//     myClass obj;
//     obj.myMethod();
//     return 0;
// }

// ____________________

// #include <iostream>
// #include <string>

// using namespace std;

// class myClass
// {
// public:
//     myClass()
//     {
//         cout << "Construtor called";
//     }
// };

// int main()
// {
//     myClass obj;
//     return 0;
// }

// _________________________

// #include <iostream>
// #include <string>

// using namespace std;

// class Profile
// {
// public:
//     string firstname;
//     string lastname;
//     int age;
//     Profile(string x, string y, int z)
//     {
//         firstname = x;
//         lastname = y;
//         age = z;
//     }
// };

// int main()
// {
//     Profile student1("Arpita", "Agrahari", 20);
//     Profile student2("Harshit", "Shukla", 21);

//     cout << student1.firstname << " " << student1.lastname << " " << student1.age << endl;
//     cout << student2.firstname << " " << student2.lastname << " " << student2.age << endl;

//     return 0;
// }

// ________________________

// #include <iostream>
// #include <string>

// using namespace std;

// class Profile
// {
// public:
//     string firstname;
//     string lastname;
//     int age;
//     Profile(string x, string y, int z);
// };

// Profile::Profile(string x, string y, int z)
// { // :: -> scope resolution operator
//     firstname = x;
//     lastname = y;
//     age = z;
// }

// int main()
// {
//     Profile student1("Arpita", "Agrahari", 20);
//     Profile student2("Harshit", "Shukla", 21);

//     cout << student1.firstname << " " << student1.lastname << " " << student1.age << endl;
//     cout << student2.firstname << " " << student2.lastname << " " << student2.age << endl;

//     return 0;
// }

// _____________________

// #include <iostream>

// using namespace std;

// class myClass {
//     int x = 10; // by default all members of a class are private
//     public:
//         int y = 20;
//     private: // can not be accessed outside of class
//         int z = 30;
// };

// int main() {
//     myClass obj;
//     // cout << obj.x << endl; -> gives error declared private here
//     return 0;
// }

//__________________

// ENCAPSULATION


