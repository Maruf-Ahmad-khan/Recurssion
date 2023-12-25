#include <bits/stdc++.h>
using namespace std;
// Sliding window approach
int lengthOfLonestSubstring(string s)
{
     int maxlength = 0;
     vector<int> ans(128, -1);
     int left = 0;
     for (int right = 0; right < s.length(); right++)
     {
          if (ans[s[right]] >= left)
          {
               left = ans[s[right]] + 1;
          }
          ans[s[right]] = right;
          maxlength = max(maxlength, right - left + 1);
     }
     return maxlength;
}

int main()
{
     string s = "abcabcbb";
     cout << "The longest length of substring is :" << lengthOfLonestSubstring(s) << endl;
     return 0;
}