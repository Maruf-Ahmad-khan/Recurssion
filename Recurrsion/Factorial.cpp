#include<iostream>
using namespace std;
int factorial(int n)
{
     cout<<"Function is called for n :"<<n<<endl;
     // base condition to tell when the code has to stop
     if(n==1)
     return 1;
     int result = n * factorial(n-1);
     return result;
}
int main()
{
     int n;
     cout<<"Enter n:"<<endl;
     cin>>n;
     int ans = factorial(n);
     cout<<"The Factorial is :"<<ans<<endl;
     return 0;
}