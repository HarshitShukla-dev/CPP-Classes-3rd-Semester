// Ascii value of null charecter is 0

#include<iostream>
using namespace std;
int main(){
    char a[100];
    int count = 0;
    cin>>a;
    cout<<a<<endl;

    for(int i = 0; a[i] != '\0'; i++){
        count += 1;
    }

    cout<<"length : "<<count<<endl;
    return 0;
}