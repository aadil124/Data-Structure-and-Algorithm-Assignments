/***********************************************************************************************

  sorting of array by selection sort......if array define in main fuction

************************************************************************************************/

// #include <iostream>

// using namespace std;

// int main()
// {

//     int a[] = {5, 4, 1, 6, 9, 3, 7};

//     int n = sizeof(a) / sizeof(int);

//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         int temp = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[min] > a[j])
//             {
//                 min = j;
//             }
//         }
//         temp = a[min];
//         a[min] = a[i];
//         a[i] = temp;
//     }

//     for (int k = 0; k < n; k++)
//     {
//         cout << a[k] << "\t";
//     }

//     return 0;
// }

/***********************************************************************************************

  sorting of array by selection sort.....if array define in own function

************************************************************************************************/

// #include <iostream>

// using namespace std;

// void selectionSort(int a[], int n)
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = i;
//         int temp = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[min] > a[j])
//             {
//                 min = j;
//             }
//         }
//         temp = a[min];
//         a[min] = a[i];
//         a[i] = temp;
//     }

//     for (int k = 0; k < n; k++)
//     {
//         cout << a[k] << "\t";
//     }
// }

// int main()
// {

//     int a[] = {5, 4, 1, 6, 9, 3, 7, 11, 13, 2, -3};

//     int n = sizeof(a) / sizeof(int);

//     selectionSort(a, n);

//     return 0;
// }

/***********************************************************************************************

  Find the maximum number from given array

************************************************************************************************/
// #include <iostream>

// using namespace std;

// int main()
// {

//     int a[] = {4, 6, 2, 1, 3, 8, 16, 11, 5, 21};
//     int n = sizeof(a) / sizeof(int);

//     int max = 0;
//     for (int j = 1; j < n; j++)
//     {
//         if (a[j] > a[max])
//         {
//             max = j;
//         }
//     }
//     cout << "Maximum number is: " << a[max];

//     return 0;
// }

/***********************************************************************************************

  Find the minimum number from given array

************************************************************************************************/
#include <iostream>

using namespace std;

int main()
{

    int a[] = {4, 6, 2, 10, 3, 8, 16, 11, 5, 21};
    int n = sizeof(a) / sizeof(int);

    int min = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[j] < a[min])
        {
            min = j;
        }
    }
    cout << "Minimum number is: " << a[min];

    return 0;
}