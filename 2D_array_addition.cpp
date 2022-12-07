/**********************************************************************************************
 1) Addition of 2D Array
***********************************************************************************************/


// #include <iostream>

// using namespace std;

// int main()
// {

//     cout << "2D Arrays Addition" << endl;
//     int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int c[3][3];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] + b[i][j];
//             cout << c[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/**********************************************************************************************
 2) Multiplication of 2D Array
 
***********************************************************************************************/

#include <iostream>

using namespace std;

int main()
{

    cout << "2D Arrays Multiplications" << endl;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int a[3][3] = {{2, 4, 1}, {2, 3, 9}, {3, 1, 8}};
    // int b[3][3] = {{1, 2, 3}, {3, 6, 1}, {2, 4, 7}};
    int c[3][3];
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            temp = 0;
            for (int k = 0; k < 3; k++)
            {
                temp = temp + a[i][k] * b[k][j];
                c[i][j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}