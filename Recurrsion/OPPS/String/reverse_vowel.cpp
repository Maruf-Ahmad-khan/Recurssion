#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
     ch = tolower(ch);
     return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string reverseVowel(string s)
{
     int left = 0;
     int right = s.size() - 1;
     while(left < right)
     {
          if(isVowel(s[left]) && isVowel(s[right]))
          {
               swap(s[left], s[right]);
               left ++; 
               right --;
          }
          else if(isVowel(s[left]) == 0)
          {
               left ++;
          }
          else 
          {
               right --;
          }
     }
     return s;
}

int main()
{
     string s;
     cout<<"Enter the string:"<<endl;
     cin>>s;
     cout<<"Reverse Vowel is :"<<reverseVowel(s)<<endl;
     return 0;
}