#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;

    if (n < 0)
    {
        cout << "Number Negative" << endl;
    }
    else
    {
        cout << "Number Positive" << endl;
    }

    return 0;
}