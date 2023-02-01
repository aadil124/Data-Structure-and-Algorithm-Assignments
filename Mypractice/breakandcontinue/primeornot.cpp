#include <iostream>

using namespace std;

void primeornot(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (n == i)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is NOT Prime";
    }
}

int main()
{
    int n;
    cout << "Enter Number to check prime or not: ";
    cin >> n;
    primeornot(n);
    return 0;
}