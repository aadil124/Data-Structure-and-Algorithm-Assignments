#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *top = NULL;

void push()
{
    int val;
    cout << "Enter value to be inserted at beginning: ";
    cin >> val;
    node *p = new node;
    p->data = val;
    p->next = NULL;

    if (top == NULL)
    {
        top = p;
    }
    else
    {
        p->next = top;
        top = p;
    }
}
void traversing()
{
    node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void pop()
{
    node *temp = top;
    top = top->next;
    delete (temp);
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