#include <iostream>
using namespace std;

void maxOfThreeNumber(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            cout << "Maximum number is: " << a;
        }
        else
        {
            cout << "Maximum number is: " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Maximum number is: " << b;
        }
        else
        {
            cout << "Maximum number is: " << c;
        }
    }
}

int main()
{

    int a, b, c;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;
    cout << "Enter Value of c: ";
    cin >> c;

    maxOfThreeNumber(a, b, c);
    return 0;
}