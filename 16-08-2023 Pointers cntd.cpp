//Double Pointer

/*
Double pointer refers to a pointer pointing to another pointer.
It is used to store the address of a pointer as a value.
*/

#include <iostream>
using namespace std;
int main(){
    int n, countZero = 0, countOne = 0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
        if (temp == 0) countZero += 1;
        else if (temp == 1) countOne += 1;
        else continue;
    }

    int reArr[n];

    for(int i=0;i<countZero;i++){
        reArr[i] = 0;
    }
    for(int i=countZero;i<countZero+countOne;i++){
        reArr[i] = 1;
    }
    for(int i=0;i<n;i++){
        cout << reArr[i] << " ";
    }
    return 0;


}