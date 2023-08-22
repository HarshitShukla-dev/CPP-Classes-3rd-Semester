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

//___________
#include <iostream>

void mergeArrays(int merged[], int arr[], int n) {
for (int i = 0; i < n; ++i) {
merged[i] = arr[i];
}
}
void sortDescending(int arr[], int n) {
for (int i = 0; i < n - 1; ++i) {
for (int j = i + 1; j < n; ++j) {
if (arr[i] < arr[j]) {
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
}
int main() {
int k, n;
std::cout << "Enter the number of arrays (k): ";
std::cin >> k;
std::cout << "Enter the length of each array (n): ";
std::cin >> n;
int mergedArray[k * n];
for (int i = 0; i < k; ++i) {
std::cout << "Enter elements for array " << i + 1 << ": ";
for (int j = 0; j < n; ++j) {
std::cin >> mergedArray[i * n + j];
}
}
sortDescending(mergedArray, k * n);
std::cout << "Sorted merged array in descending order: ";
for (int i = 0; i < k * n; ++i) {
std::cout << mergedArray[i] << " ";
}
std::cout << std::endl;
return 0;
}

//_________
#include <iostream>
void mergeArrays(int arr1[], int n, int arr2[], int m, int merged[]) {
int i = 0, j = 0, k = 0;
while (i < n && j < m) {
if (arr1[i] >= arr2[j]) {
merged[k++] = arr1[i++];
} else {
merged[k++] = arr2[j++];
}
}
while (i < n) {
merged[k++] = arr1[i++];
}
while (j < m) {
merged[k++] = arr2[j++];
}
}
void bubbleSort(int arr[], int size) {
for (int i = 0; i < size - 1; ++i) {
for (int j = 0; j < size - i - 1; ++j) {
if (arr[j] > arr[j + 1]) {
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
int main() {
int n, m;
std::cin >> n;
int arr1[100];
for (int i = 0; i < n; ++i) {
std::cin >> arr1[i];
}
std::cin >> m;
int arr2[100];
for (int i = 0; i < m; ++i) {
std::cin >> arr2[i];
}
int mergedArray[200];
mergeArrays(arr1, n, arr2, m, mergedArray);
bubbleSort(mergedArray, n + m);
for (int i = 0; i < n + m; ++i) {
std::cout << mergedArray[i] << " ";
}
std::cout << std::endl;
return 0;
}
