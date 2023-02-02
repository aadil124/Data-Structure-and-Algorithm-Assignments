#include <iostream>
using namespace std;

void findMissing(int arr[], int N)
{
    int i;
    int temp[N + 1];
    for (int i = 0; i <= N; i++)
    {
        temp[i] = 0;
    }

    for (i = 0; i < N; i++)
    {
        temp[arr[i] - 1] = 1;
    }

    int ans;
    for (i = 0; i <= N; i++)
    {
        if (temp[i] == 0)
            ans = i + 1;
    }
    cout << "The Missing number is: " << ans;
}


int main()
{
    int arr[] = {8, 3, 2, 1, 5, 4, 7};
    int N = sizeof(arr) / sizeof(int);
    findMissing(arr, N);
}