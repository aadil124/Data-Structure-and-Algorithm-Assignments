#include <iostream>
using namespace std;

void primeAtoB(int a, int b)
{

    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << " ";
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter value a: ";
    cin >> a;
    cout << "Enter value b: ";
    cin >> b;
    primeAtoB(a, b);
    return 0;
}