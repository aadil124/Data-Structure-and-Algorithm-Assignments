#include <iostream>
using namespace std;

void halfPyramidUsingNumber(int row)
{
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row;
    cout << "Enter no. of row for half pyramid using number: ";
    cin >> row;
    halfPyramidUsingNumber(row);
    return 0;
}