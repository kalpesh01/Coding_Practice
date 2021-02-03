#include <iostream>
using namespace std;

int Fibbonacci(int no)
{
    int a = 0, b = 1, c;

    for (int i = 0; i < no; i++)
    {
        c = a + b;
        cout << a << " ";
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;

    Fibbonacci(n);
    return 0;
}