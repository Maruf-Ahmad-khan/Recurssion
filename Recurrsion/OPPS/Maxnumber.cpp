#include<iostream>
using namespace std;
class Largest 
{
     int first, second, maxi;
     public:
     void set_data(int f, int s)
     {
          first = f;
          second = s;
     }
     friend void find_max(Largest);
};
void find_max(Largest t)
{
     if(t.first > t.second)
     t.maxi = t.first;
     else
     t.maxi = t.second;
     cout<<"Maximum Number is :"<<t.maxi<<endl;
}

int main()
{
     Largest l;
     l.set_data(10,20);
     find_max(l);
     return 0;
}