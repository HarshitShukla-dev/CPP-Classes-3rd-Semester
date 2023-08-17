// Ascii value of null charecter '\0' is 0

#include <iostream>
using namespace std;

// Function to calculate the length of a C-style string
int calculateLength(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char a[100];

    cout << "Enter a string: ";
    cin >> a; // Reading input as a C-style string

    cout << "Entered string: " << a << endl;

    int length = calculateLength(a); // Call the length calculation function

    cout << "Length: " << length << endl;

    return 0;
}


// cin reads a string until it encounters a whitespace character (space, newline, tab, etc.).
// cin.getline reads a string of characters until it encounters a newline character.
// cin.get reads a string of characters until it encounters a newline character, but extracts the newline character from the input sequence and stores it in c.
// cin.ignore ignores the newline character extracted by cin.get and clears the input buffer.
// cin.getline and cin.get are used to read strings with blank spaces.
// syntax: cin.getline(char_array, size_of_array, delimiter) where delimiter is optional and by default is '\n'. By deilimiter we mean the character after which cin.getline will stop reading the input.

#include <iostream>
using namespace std;

// Function to calculate the length of a C-style string
int calculateLength(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char a[100];

    cout << "Enter a string: ";
    cin.getline(a, 100); // Reading input as a C-style string

    cout << "Entered string: " << a << endl;

    int length = calculateLength(a); // Call the length calculation function

    cout << "Length: " << length << endl;

    return 0;
}

//______________

