/*************************************************************************

1) Print below * pattern

    *
   **
  ***
 ****
*****

*************************************************************************/

// #include <iostream>

// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5 - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }











// 2) Take iput from user to print * pattern

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter number to print * pattern: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }











/*****************************************************************************

3) Print below * pattern

    *
   * *
  * * *
 * * * *
* * * * *

******************************************************************************/




// #include <iostream>

// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5 - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }











// 4) Take iput from user to print * pattern

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number to print * pattern: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}