// Longest Common Prefix
#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(string strs)
{
     string ans = "";
     int i = 0;
     while(true)
     {
          int curr_id = 0;
          for(i = 0; i < strs.size(); i ++)
          {
               if(i >= strs.size())
               {
                    curr_id = 0;
                    break;
               }
               if(curr_id == 0)
               {
                    curr_id = strs[i];
               }
               else if(strs[i]!= curr_id)
               {
                    curr_id = 0;
                    break;
               }
          }
          if(curr_id == 0)
          {
               break;
          }
          i++;
          ans.push_back(curr_id);
     }
     return ans;
}
int main()
{
     string strs = "flower, flow, flight";
     cout<<"The longest common prefix is :"<<longestCommonPrefix(strs)<<endl;
     return 0;
}