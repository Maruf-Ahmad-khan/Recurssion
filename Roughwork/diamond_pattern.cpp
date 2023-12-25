#include <iostream>
using namespace std;
int main()
{
     int n;
     cout << "Enter n :" << endl;
     cin >> n;
     // top part of diamond
     for (int row = 0; row < n; row++)
     {
          // print spaces
          for (int col = 0; col < n - row - 1; col++)
          {
               cout << " ";
          }
          // print stars
          for (int col = 0; col < 2 * row + 1; col++)
          {
               // first and last character
               if (col == 0 or col == 2 * row)
               {
                    cout << "*";
               }
               else
               {
                    cout << " ";
               }
          }
          cout << endl;
     }

     // bottom part of the diamond
     for (int row = 0; row < n; row++)
     {
          // print spaces
          for (int col = 0; col < row; col++)
          {
               cout << " ";
          }
          // print stars
          for (int col = 0; col < 2 * n - (2 * row + 1); col++)
          {
               if (col == 0 or col == 2 * n - 2 * row - 2)
               {
                    cout << "*";
               }
               else
               {
                    cout << " ";
               }
          }
          cout << endl;
     }
     return 0;
}