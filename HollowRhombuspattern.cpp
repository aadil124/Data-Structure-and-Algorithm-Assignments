#include <iostream>

using namespace std;

void hollowRhombus(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k < n; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    char choice;
    do
    {
        int n;
        cout << "Enter value to print hollow rhombus: ";
        cin >> n;
        hollowRhombus(n);
        cout << "\nare you want to print rhombus again? then please enter 'Y' or 'N': ";
        cin >> choice;
    } while (choice == 'Y');

    return 0;
}