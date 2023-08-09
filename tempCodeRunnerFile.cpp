#include <iostream>
using namespace std;
void B()
{
    cout << 3;
}
void A()
{
    B();
    cout << 2;
}
int main()
{
    A();
    cout << 1;
    return 0;
}