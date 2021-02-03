#include <iostream>
using namespace std;

int main()
{
    int i, n;
    bool flag = true;

    cout << "Enter the value ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        flag = false;
    }

    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}