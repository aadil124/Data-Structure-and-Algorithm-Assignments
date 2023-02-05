#include <iostream>
using namespace std;

void rectanglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
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
        cout << "Enter value for rectangle pattern: ";
        cin >> n;

        rectanglePattern(n);
        cout << "Are you want to print again ? Enter 'Y' or 'N' : ";
        cin >> choice;

    } while (choice == 'Y');

    return 0;
}