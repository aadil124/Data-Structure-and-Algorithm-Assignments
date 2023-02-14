#include <iostream>

using namespace std;

void pattern01(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no. of rows for 0-1 pattern: ";
    cin >> n;
    pattern01(n);
    return 0;
}