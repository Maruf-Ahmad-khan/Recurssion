#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter n : "<<endl;
     cin>>n;
     for(int i = 1; i <=n; i++)
     {
        if(i % 2 == 0)
          cout<<"Even : "<<i<<endl;
        
     }
     return 0;
}