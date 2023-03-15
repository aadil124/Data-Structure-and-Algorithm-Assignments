#include <iostream>
using namespace std;

int main()
{

    // This pattern is for 3 rows and 9 columns
    int n, i, j;
    cout << "********ZigZag Pattern*********\n";
    cout << "Enter number of column: ";
    cin >> n;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
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

    return 0;
}