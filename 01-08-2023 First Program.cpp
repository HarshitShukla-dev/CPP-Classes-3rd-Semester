/*
C++ OOP’s


01/08/2023

1.History of c++
 Bjarne stroustrup    1979
 c with classes / extended version of c
  c++ 1983
 AT & T, s Bell labs
 Dennis Ritchie   c Language

2. Facts of c++
  1. C++ OOP aspect was inspired by a computer simulation language called Simula67
  2.Java is written in c++
  3. Most of operating system of our modern era are written in c++
  4. c++ is 4th most used language of the world

3. features of c++
  C++ is a middle language
  C++ supports oops
  * C++ joins three separate programming traditions
  . procedural oriented language, also followed by c oops language
  . Generic programming supported by c++ templates

4. Diff b/w c and c++
  1.c++ is a superset of c language
  2.C++ program can use existing c software libraries
  3. c follows top-down approach of programming
  4. c++ follows bottom-up approach programming //
  5. c adopts procedure oriented and c++ adopts object oriented
  6. c++ can adopt both procedure oriented and object oriented
*/

//____________________

#include <iostream> // # preprocessor
#include <stdio.h>
using namespace std;

// Namespace is a container for identifiers
// it puts the names of its members in a distinct space
// so that they don't conflict with the names in other namespaces or global namespace

int main() // Every time code stats from here
{
  cout << "Hello World"; // cout is an object of ostream class
  printf("Hello World"); // ";" is a statement terminator
  return 0;
}

//____________________

/*
Namespace in C++
Namespace is a fundamental concept in C++ that provides a mechanism for organizing identifiers and preventing naming conflicts. It acts as a container for identifiers (variables, functions, classes, etc.) and allows grouping them under a specific name, creating a separate "space" for those identifiers. Here are some important points to understand about namespaces:
1.	Purpose of Namespaces: The primary purpose of namespaces is to avoid naming clashes between identifiers. When different libraries or code modules are combined, there might be a possibility of naming conflicts if the same identifier names are used. Namespaces help mitigate this issue by segregating identifiers into different contexts.
2.	Separating Identifiers: A namespace effectively segregates the names of its members from the names in other namespaces or the global namespace. It means you can have the same identifier name in multiple namespaces without any conflict.
3.	Definition and Termination: A namespace is defined using the namespace keyword followed by the desired name. The definition does not end with a semicolon; it must be global, usually placed at the global scope of the code file. For example:

// Declaration of namespace
namespace MyNamespace {
    // Members of MyNamespace go here
    int x;
    void func();
};

1.	Alias for Namespaces: It is possible to create an alias (an alternative name) for a namespace using the namespace keyword followed by the new name and an equal sign, and then the original namespace name. This can be useful to simplify long namespaces or resolve naming conflicts. For example:

// Creating an alias for MyNamespace called MN
namespace MN = MyNamespace;

1.	Namespace vs. Class: It is essential to understand that namespaces are not classes. Unlike classes, they cannot have member functions, constructors, or data members. They are solely used for grouping and organizing identifiers.
2.	Extensibility and Redefinition: Namespaces can be continued and extended across multiple source files and even multiple points in the codebase. You can add new identifiers to an existing namespace in different parts of your program. However, you should avoid redefining the same namespace with different content, as this can lead to confusion and undefined behavior.
Using namespaces in C++ promotes cleaner and more modular code, especially in larger projects where multiple developers might be working simultaneously, potentially introducing naming conflicts. By carefully organizing identifiers into namespaces, you can enhance the overall maintainability and readability of your codebase. Remember to use meaningful and descriptive names for namespaces to convey their purpose effectively.
*/

//____________________

#include <iostream>
// using namespace std;
int main()
{
  std::cout << "Hello World";
  return 0;
}

//____________________

#include <iostream>
// using namespace std;
int main()
{
  int x; // declaration
  std::cout << "Hello World";
  return 0;
}

//____________________

// Making our own namespace
// The definition never ends with a semicolon
// The namespace definition must be done at global scope
// We can use an extra name or alias for our already defined namespace
// Namespace is not a class, it is a container for identifiers

#include <iostream>
namespace Myspace
{
  int x = 10;
} // namespace Myspace
int main()
{
  std::cout << Myspace::x;
  return 0;
}

// More points on namespace
// 1. It can be continued and extended over multiple files

//____________________