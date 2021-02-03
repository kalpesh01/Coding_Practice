#include <iostream>
using namespace std;

int main()
{

    int a = 7, b = 9;

    cout << "Before swap" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swap" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}