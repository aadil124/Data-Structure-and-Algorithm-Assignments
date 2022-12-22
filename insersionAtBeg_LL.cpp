/************************************************************************************************

 insertion of linked list at beginning for 2 0r 3 nodes

************************************************************************************************/

// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
// };

// node *head = NULL;

// void insertAtBeg(int val)
// {

//     node *p = new node;
//     p->data = val;
//     p->next = NULL;

//     if (head == NULL)
//     {
//         head = p;
//     }
//     else
//     {
//         p->next = head;
//         head = p;
//     }
// }

// int main()
// {

//     insertAtBeg(5);
//     insertAtBeg(23);
//     cout << head->data<<endl;
//     cout << head->next->data;

//     return 0;
// }

/************************************************************************************************

Traversal of LL

************************************************************************************************/

// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
// };

// node *head = NULL;

// void insertAtBeg(int val)
// {

//     node *p = new node;
//     p->data = val;
//     p->next = NULL;

//     if (head == NULL)
//     {
//         head = p;
//     }
//     else
//     {
//         p->next = head;
//         head = p;
//     }
// }
// void traversing()
// {

//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main()
// {

//     insertAtBeg(5);
//     insertAtBeg(23);
//     insertAtBeg(11);
//     insertAtBeg(17);
//     // cout << head->data<<endl;
//     // cout << head->next->data;
//     traversing();

//     return 0;
// }

/************************************************************************************************

insertion at end

************************************************************************************************/

// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
// };

// node *head = NULL;

// void insertAtBeg(int val)
// {

//     node *p = new node;
//     p->data = val;
//     p->next = NULL;

//     if (head == NULL)
//     {
//         head = p;
//     }
//     else
//     {
//         p->next = head;
//         head = p;
//     }
// }
// void traversing()
// {

//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// void insertionAtend(int val)
// {
//     node *p = new node;
//     p->data = val;
//     p->next = NULL;

//     node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = p;
// }

// int main()
// {

//     insertAtBeg(5);
//     insertAtBeg(23);
//     insertAtBeg(11);
//     insertAtBeg(17);
//     // cout << head->data<<endl;
//     // cout << head->next->data;
//     insertionAtend(7);
//     traversing();

//     return 0;
// }

/************************************************************************************************

insertion at any position

************************************************************************************************/

// #include <iostream>

// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;
// };

// node *head = NULL;

// void insertAtBeg(int val)
// {

//     node *p = new node;
//     p->data = val;
//     p->next = NULL;

//     if (head == NULL)
//     {
//         head = p;
//     }
//     else
//     {
//         p->next = head;
//         head = p;
//     }
// }
// void traversing()
// {

//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// void insertionAtend(int val)
// {
//     node *p = new node;
//     p->data = val;
//     p->next = NULL;

//     node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = p;
// }

// void insertionAtanyposition(int val, int pos)
// {
//     node *p = new node;
//     p->data = val;
//     p->next = NULL;
//     node *temp = head;
//     int i = 1;
//     while (i < pos - 1)
//     {
//         temp = temp->next;
//         i++;
//     }
//     p->next = temp->next;
//     temp->next = p;
// }

// int main()
// {

//     insertAtBeg(5);
//     insertAtBeg(23);
//     insertAtBeg(11);
//     insertAtBeg(17);
//     // cout << head->data<<endl;
//     // cout << head->next->data;
//     insertionAtend(7);
//     insertionAtanyposition(33, 2);
//     traversing();

//     return 0;
// }
/************************************************************************************************

menu driven program for insertion of LL

************************************************************************************************/

#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *head = NULL;

void insertAtBeg()
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

void insertionAtend()
{
    int val;
    cout << "Enter value here: ";
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

void insertionAtanyposition()
{
    int val, pos;
    cout << "Enter value here: ";
    cin >> val;
    cout << endl;
    cout << "Enter position here: ";
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
void exit(bool)
{
    bool exit = 1;
}

int main()
{
    char choice;
    int input;
    cout << "***************Menu************************" << endl;
    cout << "Which operation are you want to perform?" << endl;
    cout << "Select from following" << endl;
    cout << "1. Insert at beginning" << endl;
    cout << "2. Insert at end" << endl;
    cout << "3. Insert at any position" << endl;
    cout << "4. Traversing of LL" << endl;
    cout << "5. Exit" << endl;

    while (1)
    {

        cout << "Enter your choice here: ";
        cin >> input;
        switch (input)
        {
        case 1:
            insertAtBeg();
            break;
        case 2:
            insertionAtend();
            break;
        case 3:
            insertionAtanyposition();
            break;
        case 4:
            traversing();
            break;
        case 5:
            exit(0);
            break;

        default:
            cout << "Enter correct option.";
            break;
        }
        cout << endl;
    }

    return 0;
}