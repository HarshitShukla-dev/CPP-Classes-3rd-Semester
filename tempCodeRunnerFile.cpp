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
while (j < n) {
merged[k++] = arr2[j++];
}
while (i < m) {
merged[k++] = arr1[i++];
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
for (int i = 0; i < n + m; ++i) {
std::cout << mergedArray[i] << " ";
}
std::cout << std::endl;
return 0;
}
