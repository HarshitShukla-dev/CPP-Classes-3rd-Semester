// Double Pointer

/*
Double pointer refers to a pointer pointing to another pointer.
It is used to store the address of a pointer as a value.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;

    int inputArray[n];
    int countZeros = 0;

    cout << "Enter " << n << " binary digits (0 or 1) separated by spaces:" << endl;
    for (int i = 0; i < n; i++)
    {
        int digit;
        cin >> digit;
        inputArray[i] = digit;

        if (digit == 0)
            countZeros++;
    }

    int rearrangedArray[n];

    // Place zeros at the beginning
    for (int i = 0; i < countZeros; i++)
    {
        rearrangedArray[i] = 0;
    }

    // Place ones after zeros
    for (int i = countZeros; i < n; i++)
    {
        rearrangedArray[i] = 1;
    }

    // Output the rearranged array
    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
    {
        cout << rearrangedArray[i] << " ";
    }
    cout << endl;

    return 0;
}

//___________________

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;

    int inputArray[n];
    int countZeros = 0;

    cout << "Enter " << n << " binary digits (0 or 1) separated by spaces:" << endl;
    for (int i = 0; i < n; i++)
    {
        int digit;
        cin >> digit;
        inputArray[i] = digit;
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (inputArray[i] == 0)
        {
            inputArray[i] = 1;
            inputArray[j] = 0;
            j++;
        }
    }

    // Output the rearranged array
    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++)
    {
        cout << inputArray[i] << " ";
    }
    cout << endl;

    return 0;
}

//___________________

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        arr[i] = element;
    }

    int duplicateElement = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                duplicateElement = arr[i];
                break; // Found a duplicate, no need to continue inner loop
            }
        }
    }

    if (duplicateCount == 0) {
        cout << "No duplicate elements found" << endl;
    } else {
        cout << "Duplicate element found: " << duplicateElement << endl;
    }

    return 0;
}
