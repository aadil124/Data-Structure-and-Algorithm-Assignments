#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *tail = NULL;

void enqueue(int val)
{
    node *p = new node;
    p->data = val;
    p->next = p;

    if (tail == NULL)
    {
        tail = p;
    }
    else
    {
        p->next = tail->next;
        tail->next = p;
        tail = p;
    }
}
void dequeue()
{
    node *temp = tail->next;
    tail->next = temp->next;
    delete (temp);
}
void traverse()
{
    node *temp = tail->next;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
}

int main()
{
    int choice, val;
    cout << "Menu Driven for Circular Queue LL\n"
            "1.enqueue\n"
            "2.dequeue\n"
            "3.traverse\n"
            "4.exit\n";

    while (1)
    {
        cout << "\nEnter your choice here: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value to be inserted: ";
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
            cout << "Please enter valid choice!!";
            break;
        }
    }

    return 0;
}