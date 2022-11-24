/*************************************************************************

1) Print below * pattern

*****
 ****
  ***
   **
    *

*************************************************************************/

// #include <iostream>

// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 0; j < i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 5; k >= i; k--)
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
//         for (int j = 0; j < i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = n; k >= i; k--)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }







/*****************************************************************************

3) Print below * pattern

* * * * *
 * * * *
  * * *
   * *
    *

******************************************************************************/

// #include <iostream>

// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 0; j < i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 5; k >= i; k--)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }













// 4) Take iput from user to print * pattern

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter number to print * pattern: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = n; k >= i; k--)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     return 0;
// }

/*****************************************************************************

3) Print below * pattern (odd number star in every rows)

*********
 *******
  *****
   ***
    *

******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number to print * pattern: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            cout << " ";
        }
        for (int k = n; k >=2*i-1; k--)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}