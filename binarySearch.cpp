/**********************************************************************************************

 1) using only main function for binary search

***********************************************************************************************/

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a[] = {5, 9, 13, 16, 21, 25, 30};
//     int n = sizeof(a) / sizeof(int);
//     int val = 13;
//     int s = 0, e = n - 1;

//     int res = -1;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         if (a[mid] == val)
//         {
//             res = mid;
//             break;
//         }
//         else if (a[mid] > val)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     if (res == -1)
//     {
//         cout << "Value is NOT Present";
//     }
//     else
//     {
//         cout << "Value is Present at " << res;
//     }

//     return 0;
// }

/**********************************************************************************************

 2)array declaration in own function ,,,taking value input from user

***********************************************************************************************/

// #include <iostream>

// using namespace std;

// void binarySearch()
// {
//     int a[] = {5, 9, 13, 16, 21, 25, 30};
//     int n = sizeof(a) / sizeof(int);
//     int val;
//     cout << "Enter Value here: ";
//     cin >> val;
//     int s = 0, e = n - 1;
//     int res = -1;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         if (a[mid] == val)
//         {
//             res = mid;
//             break;
//         }
//         else if (a[mid] > val)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     if (res == -1)
//     {
//         cout << "Value is NOT Present";
//     }
//     else
//     {
//         cout << "Value is Present at " << res;
//     }
// }

// int main()
// {
//     binarySearch();

//     return 0;
// }

/**********************************************************************************************

 3)array declaration in own function ,,,taking value input from user,,,,Menu Driven

***********************************************************************************************/

// #include <iostream>

// using namespace std;

// void binarySearch()
// {
//     int a[] = {5, 9, 13, 16, 21, 25, 30};
//     int n = sizeof(a) / sizeof(int);
//     int val;
//     cout << "Enter Value here: ";
//     cin >> val;
//     int s = 0, e = n - 1;
//     int res = -1;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         if (a[mid] == val)
//         {
//             res = mid;
//             break;
//         }
//         else if (a[mid] > val)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     if (res == -1)
//     {
//         cout << "Value is NOT Present" << endl;
//     }
//     else
//     {
//         cout << "Value is Present at " << res << endl;
//     }
// }

// int main()
// {
//     char choice;
//     do
//     {
//         binarySearch();
//         cout << "Are you want to search another number? Please enter 'Y' or 'N' : ";
//         cin >> choice;
//     } while (choice == 'Y');

//     return 0;
// }

/**********************************************************************************************

 4)array declaration in Main function ,,,taking value input from user,,,,Menu Driven

***********************************************************************************************/

// #include <iostream>

// using namespace std;

// void binarySearch(int a[], int n)
// {

//     int val;
//     cout << "Enter Value here: ";
//     cin >> val;
//     int s = 0, e = n - 1;
//     int res = -1;

//     while (s <= e)
//     {
//         int mid = (s + e) / 2;
//         if (a[mid] == val)
//         {
//             res = mid;
//             break;
//         }
//         else if (a[mid] > val)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     if (res == -1)
//     {
//         cout << "Value is NOT Present" << endl;
//     }
//     else
//     {
//         cout << "Value is Present at " << res << endl;
//     }
// }

// int main()
// {
//     int a[] = {5, 9, 13, 16, 21, 25, 30};
//     int n = sizeof(a) / sizeof(int);
//     char choice;
//     do
//     {
//         binarySearch(a,n);
//         cout << "Are you want to search another number? Please enter 'Y' or 'N' : ";
//         cin >> choice;
//     } while (choice == 'Y');

//     return 0;
// }

/**********************************************************************************************

 5)array declaration globally ,,,taking value input from user,,,,Menu Driven

***********************************************************************************************/

#include <iostream>

using namespace std;

int a[] = {5, 9, 13, 16, 21, 25, 30};
int n = sizeof(a) / sizeof(int);

void binarySearch()
{

    int val;
    cout << "Enter Value here: ";
    cin >> val;
    int s = 0, e = n - 1;
    int res = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == val)
        {
            res = mid;
            break;
        }
        else if (a[mid] > val)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (res == -1)
    {
        cout << "Value is NOT Present" << endl;
    }
    else
    {
        cout << "Value is Present at " << res << endl;
    }
}

int main()
{
    char choice;
    do
    {
        binarySearch();
        cout << "Are you want to search another number? Please enter 'Y' or 'N' : ";
        cin >> choice;
    } while (choice == 'Y');

    return 0;
}