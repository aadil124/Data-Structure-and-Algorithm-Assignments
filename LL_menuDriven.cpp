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
void Insertionatend()
{
    int val;
    cout << "Enter value to be inserted at end: ";
    cin >> val;
    node *p = new node;
    p->data = val;
    p->next = NULL;
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
}
void Insertionatanypostion()
{
    int val, pos;
    cout << "Enter value to be inserted at any position: " << endl;
    cin >> val;
    cout << "Enter position: " << endl;
    cin >> pos;

    node *p = new node;
    p->data = val;
    p->next = NULL;
    node *temp = head;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    p->next = temp->next;
    temp->next = p;
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
void Deletionatend()
{
    node *temp = head;
    node *temp2 = head;
    while (temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
    delete (temp);
}
void Deletionatanyposition()
{
    int pos, i = 1;
    cout << "Enter position to be deleted: " << endl;
    cin >> pos;
    node *temp = head;
    node *temp2 = NULL;
    while (i < pos)
    {
        temp2 = temp;
        temp = temp->next;
        i++;
    }
    temp2->next = temp->next;
    delete (temp);
}

int main()
{
    int choice;
    cout << "*************Menu********************\n"
            "1. Insertion at beginning\n"
            "2. Insertion at end\n"
            "3. Insertion at any postion\n"
            "4. Traversing of LL\n"
            "5. Deletion at beginning\n"
            "6. Deletion at end\n"
            "7. Deletion at any position\n"
            "8. Exit\n"
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
            Insertionatend();
            break;
        case 3:
            Insertionatanypostion();
            break;
        case 4:
            traversing();
            break;
        case 5:
            Deletionatbeginning();
            break;
        case 6:
            Deletionatend();
            break;
        case 7:
            Deletionatanyposition();
            break;
        case 8:
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