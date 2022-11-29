// #include <iostream>

// using namespace std;

// void add()
// {
//     cout << "For Addtion of Two Number" << endl;
//     int a, b;
//     cout << "Enter Value of a: ";
//     cin >> a;
//     cout << "Enter Value of b: ";
//     cin >> b;
//     int c;
//     c = a + b;
//     cout << "Sum of a & b is : " << c << endl;
// }
// void sub()
// {
//     cout << "For Subtraction of Two Number" << endl;
//     int a, b;
//     cout << "Enter Value of a: ";
//     cin >> a;
//     cout << "Enter Value of b: ";
//     cin >> b;
//     int c;
//     c = a - b;
//     cout << "Subtraction of a & b is : " << c << endl;
// }
// void mul()
// {
//     cout << "For Multiplication of Two Number" << endl;
//     int a, b;
//     cout << "Enter Value of a: ";
//     cin >> a;
//     cout << "Enter Value of b: ";
//     cin >> b;
//     int c;
//     c = a * b;
//     cout << "Multiplication of a & b is : " << c << endl;
// }
// void div()
// {
//     cout << "For Division of Two Number" << endl;
//     float a, b;
//     cout << "Enter Value of a: ";
//     cin >> a;
//     cout << "Enter Value of b: ";
//     cin >> b;
//     float c;
//     c = a / b;
//     cout << "Division of a & b is : " << c << endl;
// }

// int main()
// {
//     char ch;
//     do
//     {
//         add();
//         sub();
//         mul();
//         div();
//         cout << "Are you want to play again:" << endl;
//         cin >> ch;
//     } while (ch == 'y');

//     return 0;
// }

/*******************************************************************************

Using menu driven using if-else condition

********************************************************************************/

#include <iostream>

using namespace std;

void add()
{
    cout << "For Addtion of Two Number" << endl;
    int a, b;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;
    int c;
    c = a + b;
    cout << "Sum of a & b is : " << c << endl;
}
void sub()
{
    cout << "For Subtraction of Two Number" << endl;
    int a, b;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;
    int c;
    c = a - b;
    cout << "Subtraction of a & b is : " << c << endl;
}
void mul()
{
    cout << "For Multiplication of Two Number" << endl;
    int a, b;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;
    int c;
    c = a * b;
    cout << "Multiplication of a & b is : " << c << endl;
}
void div()
{
    cout << "For Division of Two Number" << endl;
    float a, b;
    cout << "Enter Value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;
    float c;
    c = a / b;
    cout << "Division of a & b is : " << c << endl;
}

int main()
{
    char ch;
    int choice;

    do
    {
        cout << "****************Calculator***************" << endl;
        cout << "Please select which operation are you want to do" << endl;
        cout << "1. Addition" << endl
             << "2. Subtraction" << endl
             << "3. Multiplication" << endl
             << "4. Division" << endl;

        cout << "Enter your choice here: ";
        cin >> choice;
        if (choice == 1)
        {
            add();
        }
        else if (choice == 2)
        {
            sub();
        }
        else if (choice == 3)
        {
            mul();
        }
        else if (choice == 4)
        {
            div();
        }
        else
        {
            cout << "Please enter correct choice!";
        }

        cout << "Are you want to do another operation? " << endl;
        cout << "Type 'Y' or 'N' here: ";
        cin >> ch;
    } while (ch == 'Y');

    return 0;
}