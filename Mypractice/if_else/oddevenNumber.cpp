#include <iostream>
using namespace std;

void evenOdd(int n){
    if (n%2==0)
    {
        cout<<"Number is Even";
    }
    else
    {
        cout << "Number is Odd";
    }
    
}

int main()
{
    int n;
    cout << "Enter Number here: ";
    cin >> n;
    evenOdd(n);
    return 0;
}