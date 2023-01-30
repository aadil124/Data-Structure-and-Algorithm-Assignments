#include <iostream>

using namespace std;

void sumofNumber(int n)
{

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of first " << n << " number is: " << sum;
}

int main()
{
    int n;
    cout << "Enter number for sum: ";
    cin >> n;
    sumofNumber(n);
    return 0;
}