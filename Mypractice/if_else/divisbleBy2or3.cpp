#include <iostream>
using namespace std;

void divisibleby2or3orBoth(int num)
{
    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << num << " is Divisible by 2 and 3";
    }
    else if (num % 2 == 0)
    {
        cout << num << " is Divisible by 2 only";
    }
    else if (num % 3 == 0)
    {
        cout << num << " is Divisible by 3 only";
    }
    else
    {
        cout << num << " is neither Divisible by 2 nor 3.";
    }
}

int main()
{
    int num;
    cout << "Enter Number here: ";
    cin >> num;
    divisibleby2or3orBoth(num);
    return 0;
}