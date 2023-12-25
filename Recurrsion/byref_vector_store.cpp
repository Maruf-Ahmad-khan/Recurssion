#include<iostream>
#include<vector>
using namespace std;

void Checkkey(string& str, int i, int& n, char& key, vector<int>& ans)
{
     // base case
     if(i>=n)
     {
          // key not found
          return;
     }
     // 1 case solve karo
     if(str[i] == key)
     {
          // store in vector
          ans.push_back(i);
     }
     // baki recurssion sambhal lega
     return Checkkey(str, i + 1, n, key, ans);
}

int main()
{
     string str = "Maruf";
     int n = str.length();
     char key = 'r';
     int i = 0;
     vector<int> ans;
     Checkkey(str, i, n, key, ans);
     cout<<"Printing ans :"<<endl;
     for(auto val: ans)
     {
          cout<<val<<" ";
     } 
     cout<<endl;
     return 0;
}