#include <iostream>

using namespace std;

int main()
{
    cout << "********Multiplication of 1st 10 numbers********" << endl;
    int sum = 1;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum * i;
    }
    cout << "Multiplication of 1st 10 number is: " << sum;
    return 0;
}