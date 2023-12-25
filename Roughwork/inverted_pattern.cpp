#include<iostream>
using namespace std;
int main()
{
       int n; 
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Star pattern would be like this :"<<endl;
    // print row
    for(int row = 0; row < n; row ++)
      {
        // print space
        for(int col = 0; col < row ; col ++)
          {
            cout<<" ";
          }
        // print star
        for(int col = 0; col < 2 * n - (2 * row + 1); col ++)
          {
            // first and last characters
            if(col == 0 or col == 2 * n - 2 * row - 2)
              {
                cout<<"*";
              }
            else 
            {
              cout<<" ";
            }
          }
        cout<<endl;
      }
  
  return 0;
}