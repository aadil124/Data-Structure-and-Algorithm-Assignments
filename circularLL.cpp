#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *add;
};
node *tail = NULL;
void Insertionatbeginning(int n)
{
    node *p = new node;
    p->data = n;
    p->add = p;

    if (tail == NULL)
    {
        tail = p;
    }
    else
    {
        p->add = tail->add;
        tail->add = p;
    }
}
void Insertionatend(int n)
{
    node *p = new node;
    p->data = n;
    p->add = NULL;

    p->add = tail->add;
    tail->add = p;
    tail = p;
}
void Insertionatanypostion(int n, int pos)
{
    node *p = new node;
    p->data = n;
    p->add = NULL;
    node *temp = tail->add;
    int i = 1;
    while (i < pos - 1)
    {
        temp = temp->add;
        i++;
    }
    p->add = temp->add;
    temp->add = p;
}
void traversing()
{
    node *temp = tail->add;

    // while (temp->add!=tail->add)    //it will always left last value for print so use do while loop
    // {
    //     cout<<temp->data;
    //     temp=temp->add;
    // }

    do
    {
        cout << temp->data << "\t";
        temp = temp->add;
    } while (temp != tail->add);
}
void Deletionatbeginning()
{
    node *temp = tail->add;
    tail->add = temp->add;
    delete (temp);
}
void Deletionatend()
{
    node *temp = tail->add;
    while (temp->add != tail)
    {
        temp = temp->add;
    }
    temp->add = tail->add;
    delete (tail);
    tail = temp;
}
void Deletionatanyposition(int pos)
{
    node *temp = tail->add;
    node *temp2 = NULL;
    int i = 1;
    while (i < pos)
    {
        temp2 = temp;
        temp = temp->add;
        i++;
    }
    temp2->add = temp->add;
    delete (temp);
}

int main()
{
    int choice, n, pos;
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
            cout << "Enter value to be inserted at beginning: ";
            cin >> n;
            Insertionatbeginning(n);
            break;
        case 2:
            cout << "Enter value to be inserted at end: ";
            cin >> n;
            Insertionatend(n);
            break;
        case 3:
            cout << "Enter value to be inserted: ";
            cin >> n;
            cout << "Enter the position where value to be inserted: ";
            cin >> pos;
            Insertionatanypostion(n, pos);
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
            cout << "Enter position to be deleted: ";
            cin >> pos;
            Deletionatanyposition(pos);
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