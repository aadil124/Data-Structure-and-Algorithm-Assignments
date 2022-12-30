/***********************************************************************************************
Implementation of pre order tree (coding part)
************************************************************************************************/

#include <iostream>

using namespace std;
class node
{
public:
    node *left;
    int data;
    node *right;
};

void preorder(node *root)
{
    if (root==NULL)
    {
        return;
    }
    else
    {
        cout << root->data << "\t";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    node *root = NULL;
    node *b = new node;
    b->data = 9;
    b->left = NULL;
    b->right = NULL;
    node *c = new node;
    c->data = 6;
    c->left = NULL;
    c->right = NULL;
    node *a = new node;
    a->data = 7;
    a->left = b;
    a->right = c;
    root = a;
    preorder(root);

    return 0;
}