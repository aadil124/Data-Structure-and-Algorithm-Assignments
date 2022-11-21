#include <iostream>

using namespace std;


int main()
{
    
    cout << "Please Enter Your Choice : " << endl
         << "1 : For Coffee" << endl
         << "2 : For Tea" << endl;
    int choice;
    cin >> choice;

    // if (choice == 1)
    // {
    //     cout << "please enjoy your coffee";
    // }
    // else
    // {
    //     cout << "please enjoy your tea";
    // }

    if (choice == 1)
    {
        cout << "please enjoy your coffee!";
    }
    else if (choice == 2)
    {
        cout << "please enjoy your tea!";
    }
    else
    {
        cout << "please enter correct choice!";
    }
    return 0;
}
