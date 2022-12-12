#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << "\t";
    }
}

int main()
{

    int arr[] = {5, 9, 16, 7, 4, 3, 12};
    int n = sizeof(arr) / sizeof(n);

    insertionSort(arr, n);

    return 0;
}