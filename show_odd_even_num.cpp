#include <iostream>
using namespace std;

int main()
{

    int value;
    cout << "Show Odd and Even Number" << endl;
    cout << "Enter Value Here : ";
    cin >> value;

    if (value % 2 == 0)
    {
        cout << "Entered Value is Even Number";
    }
    else
    {
        cout << "Entered Value is Odd Number";
    }

    return 0;
}