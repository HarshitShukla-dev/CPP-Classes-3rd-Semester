#include <iostream>
using namespace std;
int main(){
    char a[100];
    int count = 0;
    cin.getline(a, 100);
    cout<<a<<endl;

    for(int i = 0; i<100; i++){
        if (a[i] == ' ')
        count += 1;
    }

    cout<<"spaces : "<<count<<endl;
    return 0;
}