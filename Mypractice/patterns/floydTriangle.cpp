#include <iostream>

using namespace std;
void floydTriangle(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum++;
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of rows for floyd pattern: ";
    cin >> n;
    floydTriangle(n);
    return 0;
}