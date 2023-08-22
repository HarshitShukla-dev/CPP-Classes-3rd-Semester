#include <iostream>

void nextPermutation(int arr[], int n) {
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        while (j > i && arr[j] <= arr[i]) {
            j--;
        }

        std::swap(arr[i], arr[j]);
    }

    int left = i + 1;
    int right = n - 1;
    while (left < right) {
        std::swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[100];  // Assuming a maximum of 100 elements
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    nextPermutation(arr, n);

    std::cout << "Next permutation:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
