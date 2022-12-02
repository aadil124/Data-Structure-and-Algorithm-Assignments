/********************************************************************************
 1) how to find the address of array elements
********************************************************************************/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[6] = {2, 8, 9, -7, 6, 1};

//     cout << &a[0] << endl; // use for finding address
//     cout << a << endl;     // by default 0th index address is given
//     cout << a + 1 << endl; // use to find the address of next index
//     cout << a[2] << endl;  // it will show the value not address
//     return 0;
// }

/********************************************************************************
 2) linear search by simple method
********************************************************************************/

// #include <iostream>

// using namespace std;

// int main()
// {

//     cout << "Linear Search of Array Element" << endl;
//     int arr[5] = {3, 5, 7, 2, 9};

//     int value, i;
//     cout << "Enter Value here : ";
//     cin >> value;

//     for (i = 0; i <= 5; i++)
//     {
//         if (value == arr[i])
//         {
//             cout << "Value is Present at " << i << endl;
//             break;
//         }
//     }

//     if (i == 6)
//     {
//         cout << "Value is NOT Present";
//     }

//     return 0;
// }

/********************************************************************************
 3) linear search by simple method  (menu driven & making arr in another function)
********************************************************************************/

// #include <iostream>

// using namespace std;

// void linearSearch()
// {
//     cout << "Linear Search of Array Element" << endl;
//     int arr[5] = {3, 5, 7, 2, 9};

//     int value, i;
//     cout << "Enter Value here : ";
//     cin >> value;

//     for (i = 0; i <= 5; i++)
//     {
//         if (value == arr[i])
//         {
//             cout << "Value is Present at" << i << endl;
//             break;
//         }
//     }

//     if (i == 6)
//     {
//         cout << "Value is NOT Present" << endl;
//     }
// }

// int main()
// {
//     char choice;
//     do
//     {
//         linearSearch();
//      cout << "Do you want to search another number? please enter 'Y' or 'N' :  ";
//      cin >> choice;
//     } while (choice == 'Y');

//     return 0;
// }

/********************************************************************************
 4) linear search using flag   (menu driven & making arr in another function)
********************************************************************************/

#include <iostream>

using namespace std;

void linearSearch()
{
    cout << "Linear Search of Array Element" << endl;
    int arr[] = {3, 5, 7, 2, 9, 1, -3, 16, 11, 6};
    int n = sizeof(arr) / sizeof(int);
    int value, i;
    cout << "Enter Value here : ";
    cin >> value;

    bool f = 0;

    for (i = 0; i < n; i++)
    {
        if (value == arr[i])
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        cout << "Value is Present at " << i << "index." << endl;
    }
    else
    {
        cout << "Value is NOT Present." << endl;
    }
}

int main()
{
    char choice;
    do
    {
        linearSearch();
        cout << "Do you want to search another number? please enter 'Y' or 'N' :  ";
        cin >> choice;
    } while (choice == 'Y');

    return 0;
}
