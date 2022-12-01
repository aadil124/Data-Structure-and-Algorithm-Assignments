// #include <iostream>

// using namespace std;

// int a, b, c;

// void add()
// {
//     cout << "For Addtion of Two Number" << endl;
//     cout << "Enter Value of a: ";
//     cin >> a;
//     cout << "Enter Value of b: ";
//     cin >> b;
//     c = a + b;
//     cout << "Sum of a & b is : " << c << endl;
// }
// void sub()
// {
//     cout << "For Subtraction of Two Number" << endl;
//     cout << "Enter Value of a: ";
//     cin >> a;
//     cout << "Enter Value of b: ";
//     cin >> b;
//     c = a - b;
//     cout << "Subtraction of a & b is : " << c << endl;
// }
// void mul()
// {
//     cout << "For Multiplication of Two Number" << endl;
//     cout << "Enter Value of a: ";
//     cin >> a;
//     cout << "Enter Value of b: ";
//     cin >> b;
//     c = a * b;
//     cout << "Multiplication of a & b is : " << c << endl;
// }
// void div()
// {
//     cout << "For Division of Two Number" << endl;
//     float x, y;
//     cout << "Enter Value of x: ";
//     cin >> x;
//     cout << "Enter Value of y: ";
//     cin >> y;
//     float z;
//     z = x / y;
//     cout << "Division of x & y is : " << z << endl;
// }

// int main()
// {
//     char ch;
//     int choice;

//     do
//     {
//         cout << "****************Calculator***************" << endl;
//         cout << "Please select which operation are you want to do" << endl;
//         cout << "1. Addition" << endl
//              << "2. Subtraction" << endl
//              << "3. Multiplication" << endl
//              << "4. Division" << endl;

//         cout << "Enter your choice here: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             add();
//             break;
//         case 2:
//             sub();
//             break;
//         case 3:
//             mul();
//             break;
//         case 4:
//             div();
//             break;

//         default:
//             cout << "Please enter correct choice!" << endl;
//             break;
//         }

//         cout << "Are you want to do another operation? " << endl;
//         cout << "Type 'Y' or 'N' here: ";
//         cin >> ch;
//     } while (ch == 'Y');

//     return 0;
// }





/********************************************************************************

declaring a,b,c as a  global variable


********************************************************************************/

// #include <iostream>

// using namespace std;

// int a, b, c;

// void add()
// {
//     c = a + b;
//     cout << "Sum of a & b is : " << c << endl;
// }
// void sub()
// {
//     c = a - b;
//     cout << "Subtraction of a & b is : " << c << endl;
// }
// void mul()
// {
//     c = a * b;
//     cout << "Multiplication of a & b is : " << c << endl;
// }
// void div()
// {
//     c = a / b;
//     cout << "Division of a & b is : " << c << endl;
// }

// int main()
// {
//     char ch;
//     int choice;

//     do
//     {
//         cout << "****************Calculator***************" << endl;
//         cout << "Please select which operation are you want to do" << endl;
//         cout << "1. Addition" << endl
//              << "2. Subtraction" << endl
//              << "3. Multiplication" << endl
//              << "4. Division" << endl;

//         cout << "Enter your choice here: ";
//         cin >> choice;

//         cout << "Enter Value of a: ";
//         cin >> a;
//         cout << "Enter Value of b: ";
//         cin >> b;

//         switch (choice)
//         {
//         case 1:
//             add();
//             break;
//         case 2:
//             sub();
//             break;
//         case 3:
//             mul();
//             break;
//         case 4:
//             div();
//             break;

//         default:
//             cout << "Please enter correct choice!" << endl;
//             break;
//         }

//         cout << "Are you want to do another operation? " << endl;
//         cout << "Type 'Y' or 'N' here: ";
//         cin >> ch;
//     } while (ch == 'Y');

//     return 0;
// }





/********************************************************************************

Paasing value as an argument


********************************************************************************/

#include <iostream>

using namespace std;

void add(int a, int b)
{
    int c = a + b;
    cout << "Sum of a & b is : " << c << endl;
}
void sub(int a, int b)
{
    int c = a - b;
    cout << "Subtraction of a & b is : " << c << endl;
}
void mul(int a, int b)
{
    int c = a * b;
    cout << "Multiplication of a & b is : " << c << endl;
}
void Div(float a, float b)
{
    float c = a / b;
    cout << "Division of a & b is : " << c << endl;
}

int main()
{
    char ch;
    int choice;
    int a, b;
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

        cout << "Enter Value of a: ";
        cin >> a;
        cout << "Enter Value of b: ";
        cin >> b;

        switch (choice)
        {
        case 1:
            add(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            Div(a, b);
            break;

        default:
            cout << "Please enter correct choice!" << endl;
            break;
        }

        cout << "Are you want to do another operation? " << endl;
        cout << "Type 'Y' or 'N' here: ";
        cin >> ch;
    } while (ch == 'Y');

    return 0;
}