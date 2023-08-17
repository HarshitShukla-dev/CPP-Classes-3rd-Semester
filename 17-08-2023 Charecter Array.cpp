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
