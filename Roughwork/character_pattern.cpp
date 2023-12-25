#include<iostream>
using namespace std;
int main()
{
     int n;
     int col;
     cout<<"Enter n :"<<endl;
     cin>>n;
     cout<<"Your pattern will be : "<<endl;
     for(int row = 1; row <= n; row ++)
     {
          for(col = 1; col <= n; col ++)
          {
          char name = 'a' + col - 1 ;
               cout<<name <<" ";
          }
          cout<<endl;
     }
     return 0;
}