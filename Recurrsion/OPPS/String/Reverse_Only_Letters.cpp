// Leet code  :=>  Reverse only letters
#include <bits/stdc++.h>
using namespace std;
string reverseOnlyLetters(string s)
{
     int left = 0;
     int right = s.length() - 1;
     while (left <= right)
     {
          if (isalpha(s[left]) && isalpha(s[right]))
          {
               swap(s[left], s[right]);
               left++;
               right--;
          }
          else if (!isalpha(s[left]) && !isalpha(s[right]))
          {
               left++;
               right--;
          }
          else if (!isalpha(s[left]))
          {
               left++;
          }
          else
          {
               right--;
          }
     }
     return s;
}

int main()
{
     string s = "ab-cd";
     cout << "The reverse letter is :" << reverseOnlyLetters(s) << endl;
     return 0;
}