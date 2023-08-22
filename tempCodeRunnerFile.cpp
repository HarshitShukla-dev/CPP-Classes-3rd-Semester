#include <iostream>
using namespace std;
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
        swap(arr[i], arr[j]);
    }
    int left = i + 1;
    int right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    nextPermutation(arr, n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}