#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *add;
};

node *top = NULL;

void push()
{
    int val;
    cout << "Enter value to be inserted at beginning: ";
    cin >> val;
    node *p = new (nothrow) node; //nothrow key word is used when we dont have any memory space

    if (!p)
    {
        cout << "Stack overflow";
    }
    else
    {
        p->data = val;
        p->add = NULL;

        if (top == NULL)
        {
            top = p;
        }
        else
        {
            p->add = top;
            top = p;
        }
    }
}
void traversing()
{
    node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->add;
    }
}
void pop()
{
    if (top == NULL)
    {
        cout << "Underflow";
    }
    else
    {
        node *temp = top;
        top = top->add;
        delete (temp);
    }
}
int main()
{
    int choice;
    cout << "*************Menu for Stack********************\n"
            "1. Insertion at beginning(push)\n"
            "2. Traversing of LL\n"
            "3. Deletion at beginning(pop)\n"
            "4. Exit\n"
         << endl;

    while (1)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            traversing();
            break;
        case 3:
            pop();
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "Enter Valid Choice____!";
            break;
        }
        cout << endl;
    }

    return 0;
}