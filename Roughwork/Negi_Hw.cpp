#include<iostream>
using namespace std;
int main()
{
     int n; 
     cout<<"Enter n : "<<endl;
     cin >> n;
     for(int row = 1; row <= n; row ++)
     {
          for(int col = 1; col <= row; col++)
          {
               for(int col = 1; col <= n; col ++)
               {
                    cout<<"4";
               }
               cout<<endl;
          }
     }
     return 0;
}