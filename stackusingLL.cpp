#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *head = NULL;

void Insertionatbeginning()
{
    int val;
    cout << "Enter value to be inserted at beginning: ";
    cin >> val;
    node *p = new node;
    p->data = val;
    p->next = NULL;

    if (head == NULL)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
}
void traversing()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void Deletionatbeginning()
{
    node *temp = head;
    head = head->next;
    delete (temp);
}
int main()
{
    int choice;
    cout << "*************Menu for Stack********************\n"
            "1. Insertion at beginning\n"
            "2. Traversing of LL\n"
            "3. Deletion at beginning\n"
            "4. Exit\n"
         << endl;

    while (1)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Insertionatbeginning();
            break;
        case 2:
            traversing();
            break;
        case 3:
            Deletionatbeginning();
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