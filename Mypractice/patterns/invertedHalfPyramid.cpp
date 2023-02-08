#include <iostream>

using namespace std;

void invertedHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout << "Enter no. of rows to print inverted half pyramid: ";
    cin >> n;
    invertedHalfPyramid(n);
    return 0;
}