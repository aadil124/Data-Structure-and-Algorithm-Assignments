#include <iostream>

using namespace std;

int main()
{

    int a[] = {5, 6, 1, 3, 7, 4, 15, 9};
    int n = sizeof(a) / sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            int temp = 0;
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

            // for (int m = 0; m < n; m++)   //if we want to print all passes result
            // {
            //     cout << a[m] << "\t";
            // }
            // cout << endl;
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << a[k] << "\t";
    }

    return 0;
}

