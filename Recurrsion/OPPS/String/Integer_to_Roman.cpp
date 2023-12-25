
// Integer to Roman
#include<bits/stdc++.h>
using namespace std;
string intRoman(int num)
{
     string romanSymbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
     int Values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
     string ans = "";
     for(int i = 0; i < 13; i ++)
     {
          while(num >= Values[i])
          {
            ans = ans + romanSymbol[i];
            num -= Values[i];
          }
     }
     return ans;
}

int main()
{
     int num;
     cout<<"Enter the Integer :"<<endl;
     cin>>num;
     cout<<"The roman number is :"<<intRoman(num)<<endl;
     return 0;
}