#include <iostream>

using namespace std;

int main()
{

    int a[] = {5, 4, 1, 6, 9, 3, 7};

    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        int temp = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << "\t";
    }

    return 0;
}