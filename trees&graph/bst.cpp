#include <iostream>
using namespace std;

class node
{
public:
    node *left;
    int data;
    node *right;
};

node *root = NULL;

node *insert(node *root, int n)
{
    if (root == NULL)
    {
        node *temp = new node;
        temp->data = n;
        temp->left = temp->right = NULL;
        return temp;
    }
    else if (n < root->data)
    {
        root->left = insert(root->left, n);
    }
    else
    {
        root->right = insert(root->right, n);
    }
    return root;
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << "\t";
        inorder(root->right);
    }
}

void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << "\t";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << "\t";
    }
}

node *search(node *root, int n)
{
    if (root == NULL)
        return NULL;
    if (root->data == n)
        return root;
    else if (n < root->data)
        return search(root->left, n);
    else
        return search(root->right, n);
}

int minVal(node *root)
{
    int min = root->data;
    while (root->left != NULL)
    {
        min = root->left->data;
        root = root->left;
    }
    return min;
}
node *deletenode(node *root, int k)
{

    if (root == NULL)
        return root;

    if (k < root->data)
    {
        root->left = deletenode(root->left, k);
        return root;
    }
    else if (root->data < k)
    {
        root->right = deletenode(root->right, k);
        return root;
    }

    if (root->left == NULL)
    {
        node *temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL)
    {
        node *temp = root->left;
        delete root;
        return temp;
    }

    else
    {
        root->data = minVal(root->right);
        root->right = deletenode(root->right, root->data);
        return root;
    }
}

int main()
{
    int ch, val, pos;
    node *temp;
    cout << "      MENU   ";
    cout << "\n1.Insertion \n2.Inorder\n3.Preorder\n 4. Postorder\n"
            "5.Deletion \n 6.Search\n 7.Exit";
    while (1)
    {
        cout << "\nEnter the choice:";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the value to be inserted: ";
            cin >> val;
            root = insert(root, val);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            cout << "Enter the value to be searched: ";
            cin >> val;
            temp = search(root, val);
            if (temp != NULL)
                cout << "element found";
            else
                cout << "not found";
            break;
        case 6:
            cout << "Enter the value to be deleted: ";
            cin >> val;
            root = deletenode(root, val);
            break;
        case 7:
            exit(0);

        default:
            cout << "\nError! Invalid choice!...";
        }
    }
    return 0;
}
