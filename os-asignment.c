#include <stdio.h>

void sort(int a[], int b[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap elements in arrays 'a' and 'b'
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d", &n);  // Read the number of elements in the arrays
    scanf("%d", &m);  // Assuming you want to read 'm' from user input, though it is not used in this code.

    int a[n], b[n];

    // Input values for array 'a'
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input values for array 'b'
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Sort arrays 'a' and 'b' based on values in 'a'
    sort(a, b, n);

    // Print sorted arrays 'a' and 'b'
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
