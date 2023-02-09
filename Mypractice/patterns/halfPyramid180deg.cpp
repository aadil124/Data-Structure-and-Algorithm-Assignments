#include <iostream>

using namespace std;
void halfPyramid180degRotation(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no. of rows to print half pyramid about 180 degree rotation: ";
    cin >> n;
    halfPyramid180degRotation(n);
    return 0;
}