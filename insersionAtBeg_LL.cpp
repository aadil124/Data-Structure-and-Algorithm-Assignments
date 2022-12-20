#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *head = NULL;

void insertAtBeg(int val)
{

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

int main()
{

    insertAtBeg(5);
    insertAtBeg(23);
    cout << head->data<<endl;
    cout << head->next->data;

    return 0;
}