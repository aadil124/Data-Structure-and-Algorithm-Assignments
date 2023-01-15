#include <iostream>
using namespace std;

#define size 10
int arr[size];
int f = -1, r = -1;

void enqueue(int val)
{

    if ((r + 1) % size == f) //( r==size-1) in LQ
    {
        cout << "Over Flow";
    }
    else if (f == -1 && r == -1)
    {
        f++;
        r++;
        arr[r] = val;
    }
    else
    {
        //    r++;   (in linear queue)
        r=(r + 1) % size; // in circular queue for rotating purpose
        arr[r] = val;
    }
}
void dequeue()
{
    if (f==-1 && r==-1)
    {
       cout<<"underflow";
    }
    else if (f==r)
    {
        cout<<"deleted element is: "<<arr[f]<<endl;
        f=r=-1;
    }
    else
    {
        cout << "deleted element is: " << arr[f] << endl;
        f = (f+1)%size;      // in LQ (f++)
    }
    
}
void traverse()
{
    for (int i = f; i != r; i=(i + 1) % size)
    {
       cout<<arr[i]<<" ";
    }
    cout<<arr[r];   // one value is remaining for print
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
        cout << "\nEnter your choice here: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int val;
            cout << "Enter value to be inserted at beginning: ";
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
            cout << "Enter valid choice!!!";
            break;
        }
    }

    return 0;
}