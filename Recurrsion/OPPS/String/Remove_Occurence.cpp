#include<bits/stdc++.h>
using namespace std;
string removeOccurence(string s, string part)
{
     int pos = s.find(part);
     while(pos != string :: npos)
     {
          s.erase(pos, part.length());
          pos = s.find(part);
     }
     return s;
}

int main()
{
     string s = "daabcbaabcbc";
     string part = "abc";
     cout<<"After removing the occurences is :"<<removeOccurence(s, part)<<endl;
     return 0;
}