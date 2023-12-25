// write a program to find a character in the string
#include <iostream>
using namespace std;
int chechkey(string&str, int i, int& n, char& key)
{
     if (i >= n)
     {
          // if key not found
          return 1;
     }
     // solve one case
     if (str[i] == key)
     {
          return i;
     }
     // recurssion will solve all the case
     return chechkey(str, i + 1, n, key);
}
int main()
{
     string str = "Maruf";
     int n = str.length();
     // character always kept under single quotes
     char key = 'r';
     int i = 0;
     int ans = chechkey(str, i, n, key);
     cout << "Ans is : " << ans << endl;

     return 0;
}