#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter n : "<<endl;
     cin>>n;
     cout<<"The characters are: "<<endl;
     for(int row = 1; row <= n; row ++)
     {
          char ans = 'a' + row - 1;
          for(int col = 1; col <= n; col ++)
          {
               cout<<ans<<" ";
          }
          cout<<endl;
     }
     return 0;
}