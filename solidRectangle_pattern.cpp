
// 1) simple solid rectangular star pattern________________________________________

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//        return 0;
// }


// 2) take input from user to print star pattern__________________________________________

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value here to print solid rectangular star pattern: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}