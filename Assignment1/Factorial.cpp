#include <iostream>
using namespace std;

int fact(int no)
{
    int fact = 1;
    for (int i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;

    int res = fact(n);
    cout << "factorial of " << n << " is " << res << endl;
    return 0;
}