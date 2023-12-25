//Find the Index of the First Occurrence in a String
#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle)
{
     int n = haystack.size() - 1;
     int m = needle.size() - 1;
     for(int i = 0; i < n - m; i ++)
     {
          for(int j = i; j < m; j ++)
          {
               if(needle[j] != haystack[i + j])
               {
                    break;
               }
               if(j == m - 1)
               {
                    return i;
               }
          }
     }
     return - 1;
}

int main()
{
     string haystack = "sadbutsad";
     string needle = "sad";
     cout<<"The index of first occurrences of the string is :"<<strStr(haystack, needle)<<endl;
     return 0;
}