#include<iostream>
using namespace std;
int main(){
    char a[100];
    int count = 0;
    cin>>a;
    cout<<a<<endl;

    for(int i = 0; i <100; i++){
        if (a[i] == '\0'){
            count += 1;
            break;
    }}

    cout<<"length : "<<count<<endl;
    return 0;
}