#include <iostream>
using namespace std;
int fibbonaci(int num)
{
     // base condition 
     if (num == 1)
     {
          return 0;
     }
     if (num == 2)
     {
          return 1;
     }

  return  fibbonaci(num - 1) + fibbonaci(num - 2);
}
int main()
{
     int num;
     cout << "Enter num :" << endl;
     cin >> num;
     int ans = fibbonaci(num);
     cout << "The fibbonaci series of " << num << " is :" << ans << endl;
     return 0;
}