#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};

node *head = NULL;

void insertionatbeg(int n)
{
    node *p = new node;
    p->data = n;
    p->next = NULL;
    p->prev = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head->prev = p;
        head = p;
    }
}
void insertionatend(int n)
{
    node *p = new node;
    p->data = n;
    p->next = NULL;
    p->prev = NULL;
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
}
void insertionatanyposition(int n, int pos)
{
    node *p = new node;
    p->data = n;
    p->next = NULL;
    p->prev = NULL;
    node *temp = head;
    int i = 1;

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp->next == NULL)
    {
        temp->next = p;
        p->prev = temp;
    }
    else
    {
        p->next = temp->next;
        p->prev = temp;
        temp->next->prev = p;
        temp->next = p;
    }
}
void deletionatbeg()
{
    // node *temp = head;
    // while (head->next != NULL)
    // {
    //     head = head->next;
    // }
    // delete (temp);
    // head->prev = NULL;

    head = head->next;
    delete (head->prev);
    head->prev = NULL;
}
void deletionatend()
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete (temp);
}
void deletionatanyposition(int pos)
{
    node *temp = head;
    int i = 1;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }

    // if (temp->next == NULL)
    // {
    //     temp->prev->next = NULL;
    //     delete (temp);
    // }
    // else
    // {
    //     temp->prev->next = temp->next;
    //     temp->next->prev = temp->prev;
    //     delete (temp);
    // }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete (temp);
}
void traverse()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice, n, pos;
    cout << "**************MENU***************\n"
            "1.Insertion at beg\n"
            "2.Insertion at end\n"
            "3.Insertion at any position\n"
            "4.Traversal\n"
            "5.Deletion at beg\n"
            "6.Deletion at end\n"
            "7.Deletion at any position\n"
            "8.Exit\n";

    while (1)
    {
        cout << "Enter Choice here: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value to be inserted at beginning: ";
            cin >> n;
            insertionatbeg(n);
            break;
        case 2:
            cout << "Enter value to be inserted at end: ";
            cin >> n;
            insertionatend(n);
            break;
        case 3:
            cout << "Enter value to be inserted: ";
            cin >> n;
            cout << "Enter the position where value to be inserted: ";
            cin >> pos;
            insertionatanyposition(n, pos);
            break;
        case 4:
            traverse();
            break;
        case 5:
            deletionatbeg();
            break;
        case 6:
            deletionatend();
            break;
        case 7:
            cout << "Enter position to be deleted: ";
            cin >> pos;
            deletionatanyposition(pos);
            break;
        case 8:
            exit(0);
            break;

        default:
            cout << "\nError! Invalid choice!...";
            break;
        }
    }

    return 0;
}