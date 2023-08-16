#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    int dblINT = 0, num = 0;
    for (int i = 0; i  <n; i++){
        for (int j=0; j<n;j++){
            if (arr[i] == arr[j]){
                dblINT += 1;
                num = arr[i];
                break;
            }
        }
    }

    if (dblINT == 0){
        cout << "No duplicate elements found" << endl;
    }
    else{
        cout << "Duplicate element found: " << num << endl;
    }
    return 0;
}