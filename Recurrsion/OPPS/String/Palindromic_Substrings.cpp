#include<bits/stdc++.h>
using namespace std;
int expandAroundIndex(string s, int left, int right)
{
     int count = 0;
     while(left >= 0 && right < s.length() && s[left]==s[right])
     {
          count++;
          left --;
          right ++;
     }
     return count;
}
int countSubstring(string s)
{
     int totalcounts = 0;
     for(int center = 0; center < s.length(); center ++)
     {
          int odd = expandAroundIndex(s, center, center);
          totalcounts = totalcounts + odd;

               
          int even = expandAroundIndex(s, center, center + 1);
          totalcounts = totalcounts + even;
     }
     return totalcounts;
}

int main()
{
     string s = "abc";
     cout<<"The Palindromic substring is :"<<countSubstring(s)<<endl;
     return 0;
}
