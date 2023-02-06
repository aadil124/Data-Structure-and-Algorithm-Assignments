#include <iostream>
using namespace std;

void HollowRectanglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
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
        cout << "Enter value for Hollow rectangle pattern: ";
        cin >> n;

        HollowRectanglePattern(n);
        cout << "Are you want to print again ? Enter 'Y' or 'N' : ";
        cin >> choice;

    } while (choice == 'Y');
    return 0;
}