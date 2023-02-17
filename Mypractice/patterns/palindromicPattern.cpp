#include <iostream>
using namespace std;

void palindromicPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int k = i; k >= 1; k--)
    {
      cout << k;
    }
    for (int j = 1; j <= i + 1; j++)
    {
      if (j == 1)
      {
        cout << " ";
      }
      else
      {
        cout << j;
      }
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