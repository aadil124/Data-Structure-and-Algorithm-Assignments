/******************************************************************************
 1) declaring array in main function

*******************************************************************************/

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a[5];
//     int sum = 0;
//     cout << "Enter values here for making array: ";
//     for (int i = 1; i <= 5; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         sum = sum + a[i];
//     }
//     cout << "sum of all array element is: " << sum;

//     return 0;
// }

/******************************************************************************
 2) declaring in total function

*******************************************************************************/

// #include <iostream>

// using namespace std;

// void total()
// {
//     int a[5];
//     int sum = 0;
//     cout << "Enter values here for making array: ";
//     for (int i = 1; i <= 5; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         sum = sum + a[i];
//     }
//     cout << "sum of all array element is: " << sum;
// }

// int main()
// {
//     total();
//     return 0;
// }

/******************************************************************************
 3) retuning total function

*******************************************************************************/

// #include <iostream>

// using namespace std;

// int total()
// {
//     int a[5];
//     int sum = 0;
//     cout << "Enter values here for making array: ";
//     for (int i = 1; i <= 5; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         sum = sum + a[i];
//     }
//     return sum;
// }

// int main()
// {
//     int result = total();
//     cout << "sum of all array element is: " << result;
//     return 0;
// }

/******************************************************************************
 4) taking user choice to perform sum of all array element (Menu Driven)

*******************************************************************************/

// #include <iostream>

// using namespace std;

// int total()
// {
//     int a[5];
//     int sum = 0;
//     cout << "Enter values here for making array: ";
//     for (int i = 1; i <= 5; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         sum = sum + a[i];
//     }
//     return sum;
// }

// int main()
// {
//     char choice;
//     do
//     {
//         int result = total();
//         cout << "sum of all array element is: " << result << endl;
//         cout << "Are you want to do it again? Please Type 'Y' or 'N' : ";
//         cin >> choice;
//     } while (choice == 'Y');

//     return 0;
// }


/******************************************************************************
 5) Declaring array globally

*******************************************************************************/

#include <iostream>

using namespace std;


int a[5];
int sum = 0;

int total()
{
    cout << "Enter values here for making array: ";
    for (int i = 1; i <= 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    char choice;
    do
    {
        int result = total();
        cout << "sum of all array element is: " << result << endl;
        cout << "Are you want to do it again? Please Type 'Y' or 'N' : ";
        cin >> choice;
    } while (choice == 'Y');

    return 0;
}