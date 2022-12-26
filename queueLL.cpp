/**********************************************************************************************

queue using LL simple method

************************************************************************************************/
// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *address;
// };

// node *f = NULL, *r = NULL;

// void enqueue(int val)
// {

//     node *p = new (nothrow) node;
//     p->data = val;
//     p->address = NULL;

//     if (!p)
//     {
//         cout << "overflow\n";
//     }
//     else if (f == NULL && r == NULL)
//     {
//         f = p;
//         r = p;
//     }
//     else
//     {
//         r->address = p;
//         r = p;
//     }
// }

// void dequeue()
// {
//     node *temp = f;
//     if (f == NULL && r == NULL)
//     {
//         cout << "underflow\n";
//     }
//     else if (f == r)
//     {
//         cout << "deleted value: " << f->data << endl;
//         f == NULL;
//         r == NULL;
//     }
//     else
//     {
//         cout << "deleted value: " << f->data << endl;
//         f = f->address;
//         delete (temp);
//     }
// }

// void traverse()
// {
//     node *temp = f;
//     if (f == NULL && r == NULL)
//     {
//         cout << "underflow\n";
//     }
//     else
//     {
//         while (temp != NULL)
//         {
//             cout << temp->data << " ";
//             temp = temp->address;
//         }
//     }
// }

// int main()
// {
//     enqueue(5);
//     enqueue(8);
//     traverse();
//     enqueue(7);
//     enqueue(4);
//     dequeue();
//     traverse();
//     enqueue(17);
//     dequeue();
//     dequeue();
//     traverse();
//     dequeue();
//     traverse();

//     return 0;
// }


/**********************************************************************************************

queue using LL (MENU DRIVEN PROGRAM)

************************************************************************************************/
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *address;
};

node *f = NULL, *r = NULL;

void enqueue(int val)
{

    node *p = new (nothrow) node;
    p->data = val;
    p->address = NULL;

    if (!p)
    {
        cout << "overflow\n";
    }
    else if (f == NULL && r == NULL)
    {
        f = p;
        r = p;
    }
    else
    {
        r->address = p;
        r = p;
    }
}

void dequeue()
{
    node *temp = f;
    if (f == NULL && r == NULL)
    {
        cout << "underflow\n";
    }
    else if (f == r)
    {
        cout << "deleted value: " << f->data << endl;
        f == NULL;
        r == NULL;
    }
    else
    {
        cout << "deleted value: " << f->data << endl;
        f = f->address;
        delete (temp);
    }
}

void traverse()
{
    node *temp = f;
    if (f == NULL && r == NULL)
    {
        cout << "underflow\n";
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " "<<endl;
            temp = temp->address;
        }
    }
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
            int val;
            cout << "Enter value here: ";
            cin >> val;
            enqueue(val);
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