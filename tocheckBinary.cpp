#include <iostream>
using namespace std;

int main()
{

    int num, bin;
    char choice;

    do
    {
        cout << "Enter a number : ";
        cin >> num;
        if (0 <= num <= 30000)
        {
            cout << "The Binary form of " << num << " is (read Right to Left) : ";
            while (num > 0)
            {
                bin = num % 2;
                cout << bin;
                num /= 2;
            }
            cout << endl;
        }
        else
        {
            cout << "Entered Number is out of range please enter 0 < num < 30000 " << endl;
        }

        cout << "Are you want to check a new number? Enter 'Y' or 'N' : ";
        cin >> choice;

    } while (choice == 'Y');

    return 0;
}