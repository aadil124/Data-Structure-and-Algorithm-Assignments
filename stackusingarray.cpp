/**********************************************************************************************

 simple program for stack using Array

***********************************************************************************************/

// #include <iostream>
// using namespace std;

// #define MAX 10
// int a[MAX];

// int top = -1;

// int isfull()
// {
//     if (top == MAX - 1)
//         return 1;
//     else
//         return 0;
// }
// int isempty()
// {
//     if (top == - 1)
//         return 1;
//     else
//         return 0;
// }
// void push(int n)
// {
//     if (isfull())
//     {
//         cout << "Stack overflow";
//     }
//     else
//     {
//         top++;
//         a[top] = n;
//     }

//     // if (top == MAX - 1)
//     // {
//     //     cout << "Stack overflow";
//     // }
//     // else
//     // {
//     //     top++;
//     //     a[top] = n;
//     // }
// }
// int pop()
// {
//     if (isempty())
//     {
//         cout << "stack underflow";
//     }
//     else
//     {
//         int val = a[top];
//         top--;
//         return val;
//     }

//     // if (top == -1)
//     // {
//     //     cout << "stack underflow";
//     // }
//     // else
//     // {
//     //     int val = a[top];
//     //     top--;
//     // }
// }
// void traverse()
// {
//     for (int i = top; i >= 0; i--)
//     {
//         cout << a[top] << "\t";
//     }
// }

// int main()
// {
//     push(11);
//     push(4);
//     push(5);
//     traverse();
//     cout<<endl;
//     int val=pop();
//     cout<<"deleted val: "<<val<<endl;
//     traverse();
//     cout << endl;
//     pop();
//     push(3);
//     push(1);
//     traverse();
//     return 0;
// }

/**********************************************************************************************

 menu driven program for stack using Array

***********************************************************************************************/

#include <iostream>
using namespace std;

#define size 10
int arr[size];
int top = -1;
void push()
{
    int pushvalue;
    cout << "enter valid to be pushed: ";
    cin >> pushvalue;

    if (top == size - 1)
    {
        cout << "stack overflow\n";
    }
    else
    {
        top++;
        arr[top] = pushvalue;
    }
}
void traverse()
{
    for (int i = top; i>=0; i--)
    {
        cout << arr[top]<<" "<<endl;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "underflow\n";
    }
    else
    {
        int val;
        arr[top] = val;
        top--;
    }
}

int main()
{
    cout << "***************Menu Driven for Stack using Array**************************\n"
            "1. PUSH\n"
            "2. Traverse\n"
            "3. POP\n"
            "4. Exit"
         << endl;

    while (1)
    {
        int choice;
        cout << "Enter choice here: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            traverse();
            break;
        case 3:
            pop();
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "Enter valid choice!!!!\n";
            break;
        }
    }

    return 0;
}
