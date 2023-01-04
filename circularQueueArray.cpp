#include<iostream>
using namespace std;

void enqueue(int n){

}
void dequeue()
{
}
void traverse()
{
}

int main()
{

    int choice;
    cout << "********MENU******************\n";
    cout << "1. enqueue\n"
            "2. dequeue\n"
            "3. traverse\n"
            "4. Exist\n";
    while (1)
    {
        cout << "Enter your choice here: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int n;
            cout << "Enter value to be inserted at beginning: ";
            cin >> n;
            enqueue(n);
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
            cout << "Enter valid choice!!!";
            break;
        }
    }

    return 0;
}