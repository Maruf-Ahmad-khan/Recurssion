#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
     string ans = "";
     int i = 0;
     while (i < s.length())
     {
          if (ans.length() && ans[ans.length() - 1] == s[i])
          {
               ans.pop_back();
          }
          else
          {
               ans.push_back(s[i]);
          }
          i++;
     }
     return ans;
}

int main ()
{
     string s = "abbaca";
     string s1 = "azxxzy";
     cout<<"After removing Duplicate string :"<<removeDuplicates(s)<<endl;
     cout<<"After removing Duplicate string :"<<removeDuplicates(s1)<<endl;
     return 0;
}