/**********************************************************************************************

queue using array simple method

***********************************************************************************************/

// #include <iostream>
// using namespace std;

// #define size 10
// int arr[size];
// int f = -1, r = -1;

// void enqueue(int n)
// {

//     if (f == size - 1)
//     {
//         cout << "queue overflow" << endl;
//     }
//     else if (f == -1 && r == -1)
//     {
//         f++;
//         r++;
//         arr[r] = n;
//     }
//     else
//     {
//         r++;
//         arr[r] = n;
//     }
// }

// void dequeue()
// {

//     if (f == -1 && r == -1)
//     {
//         cout << "underflow" << endl;
//     }
//     else if (f == r)
//     {
//         cout << "The Deleted value is: " << arr[f] << endl;
//         f = -1;
//         r = -1;
//     }
//     else
//     {
//         cout << "The Deleted value is: " << arr[f] << endl;
//         f++;
//     }
// }

// void traverse()
// {
//     // int i = f;
//     // while (i <= r)
//     // {
//     //     cout << arr[i] << " ";
//     //     i++;
//     // }
//     for (int i = f; i <= r; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     enqueue(5);
//     enqueue(7);
//     enqueue(4);
//     enqueue(2);
//     dequeue();
//     dequeue();
//     enqueue(17);
//     enqueue(6);
//     dequeue();
//     traverse();

//     return 0;
// }

/**********************************************************************************************

queue using array MENU DRIVEN

***********************************************************************************************/

#include <iostream>
using namespace std;

#define size 10
int arr[size];
int f = -1, r = -1;

void enqueue(int n)
{

    if (f == size - 1)
    {
        cout << "queue overflow" << endl;
    }
    else if (f == -1 && r == -1)
    {
        f++;
        r++;
        arr[r] = n;
    }
    else
    {
        r++;
        arr[r] = n;
    }
}

void dequeue()
{

    if (f == -1 && r == -1)
    {
        cout << "underflow" << endl;
    }
    else if (f == r)
    {
        cout << "The Deleted value is: " << arr[f] << endl;
        f = -1;
        r = -1;
    }
    else
    {
        cout << "The Deleted value is: " << arr[f] << endl;
        f++;
    }
}

void traverse()
{
    // int i = f;
    // while (i <= r)
    // {
    //     cout << arr[i] << " ";
    //     i++;
    // }
    for (int i = f; i <= r; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice;
    cout << "********MENU******************\n";
    cout << "1. enqueue\n"
            "2. dequeue\n"
            "3. traverse\n"
            "4. Exist\n";
    while (1)
    {
        cout << "Enter your choice here: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int n;
            cout << "Enter value here: ";
            cin >> n;
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "Enter valid choice!!!";
            break;
        }
    }

    return 0;
}