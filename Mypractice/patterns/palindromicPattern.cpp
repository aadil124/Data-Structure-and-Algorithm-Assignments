#include <iostream>
using namespace std;

void palindromicPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    int k;
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (k = i; k >= 1; k--)
    {
      cout << k;
    }
    for (int s = 2; s <= i; s++)
    {
      cout << s;
    }

    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Enter rows for print palindromic pattern: ";
  cin >> n;
  palindromicPattern(n);
  return 0;
}