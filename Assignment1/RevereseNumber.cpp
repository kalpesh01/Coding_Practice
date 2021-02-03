#include <iostream>
using namespace std;

int main()
{
    int n, rem, reverseNum = 0;

    cout << "Enter the Number" << endl;
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        reverseNum = reverseNum * 10 + rem;
        n = n / 10;
    }

    cout << "Revesrse Number is " << reverseNum << endl;
    return 0;
}