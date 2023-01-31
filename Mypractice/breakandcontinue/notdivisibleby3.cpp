#include <iostream>

using namespace std;

void notdivisibleby3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            // cout << i << " ";         //for divisible by 3
            continue;
        }
        else
        {
            cout << i << " ";
        }
    }
}

int main()
{

    int n;
    cout << "Enter Number here: ";
    cin >> n;
    notdivisibleby3(n);
    return 0;
}