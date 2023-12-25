#include <iostream>
using namespace std;
int countdigits(int n)
{
     // base condition
     if (n == 0)
     {
          return 0;
     }
     return 1 + countdigits(n / 10);
}
int main()
{
     int n;
     cout << "Enter a number :" << endl;
     cin >> n;
     n = abs(n);
     cout << "The number of digits are :" << countdigits(n) << endl;
     if (n % 2 == 0)
     {
          cout << "Even" << endl;
     }
     else
     {
          cout << "Odd" << endl;
     }
     return 0;
}