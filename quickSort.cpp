#include <iostream>

using namespace std;

int partition(int a[], int s, int e)
{
    int pivot = a[e];
    int i = s - 1;
    int temp;
    for (int j = s; j < e; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    i++;
    a[e] = a[i];
    a[i] = pivot;
    return i;
}

void qs(int a[], int s, int e)
{
    if (s < e)
    {
        int k = partition(a, s, e);
        qs(a, s, k - 1);
        qs(a, k + 1, e);
    }
}

int main()
{

    int a[] = {8, 3, 7, 2, 9, 6, 5, 11};
    int n = sizeof(a) / sizeof(int);
    qs(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}