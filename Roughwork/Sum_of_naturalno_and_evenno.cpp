#include<iostream>
using namespace std;
int main()
{
     int sum = 0;
     int n ;
     cout<<"Enter n : "<<endl;
     cin>>n;
     int counter = 1;
     while(counter <= n)
     {
          if(counter % 2 == 0)
          {
               cout<<counter<<" "<<"is an Even number: ";
          }
          cout<<endl;
          sum = sum + counter;
          cout<<sum<<" "<<"is sum : "<<endl;
          counter = counter + 1;
     }
     return 0;
}