#include <iostream>

using namespace std;
void invertedPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {

            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of rows for inverted pattern: ";
    cin >> n;
    invertedPattern(n);
    return 0;
}