#include <iostream>
#include <vector>

using namespace std;

vector<int> nextsmallerindex(vector<int>& arr, int n) {
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                ans[i] = j;
                break;
            }
        }
    }
    return ans;
}

vector<int> prevsmallerindex(vector<int>& arr, int n) {
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] < arr[i]) {
                ans[i] = j;
                break;
            }
        }
    }
    return ans;
}

int largestRectangleArea(vector<int>& arr) {
    int n = arr.size();
    vector<int> next(n);
    next = nextsmallerindex(arr, n);

    vector<int> prev(n);
    prev = prevsmallerindex(arr, n);

    int area = 0, maxarea = 0;
    for (int i = 0; i < n; i++) {
        int l = arr[i];
        if(next[i] != -1) next[i] = n;
        int b = next[i] - prev[i] - 1;
        area = l * b;
        maxarea = max(maxarea, area);
    }
    return maxarea;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& i : arr) cin >> i;
    cout << largestRectangleArea(arr) << endl;
    return 0;
}