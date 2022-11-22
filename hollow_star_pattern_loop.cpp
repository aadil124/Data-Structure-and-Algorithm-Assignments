// 1) simple hollow rectangular pattern____________________________

// #include <iostream>

// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (i == 1 || i == 5 || j == 1 || j == 5)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

/* 2) take input from user to print simple hollow rectangular pattern____________________________*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter value to print hollow rectangle pattern: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}