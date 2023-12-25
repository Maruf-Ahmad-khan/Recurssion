#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int left, int right)
{
     while(left < right)
     {
          if(s[left] != s[right])
          {
               return false;
          }
          left ++;
          right --;
     }
     return true;
}


string longestPalindrome(string s)
{
     string ans = "";
     for(int i = 0; i < s.size(); i ++)
     {
          for(int j = i; j < s.size(); j ++)
          {
               if(isPalindrome(s, i, j))
               {
                    string t = s.substr(i, j - i + 1);
                    ans = t.size() > ans.size() ? t : ans;
               }
          }
     }
     return ans;
}

int main()
{
     string s;
     cout<<"Enter the String :"<<endl;
     cin>>s;
     cout<<"The longest palindromic substring is :"<<longestPalindrome(s)<<endl;
     return 0;
}