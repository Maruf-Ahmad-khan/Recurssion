#include<iostream>
using namespace std;
class Animal 
{
     int age ;
     int weight;
     public:

     Animal()
     {
          age = 30;
          weight = 100;
     }
     friend class Dog;
};

class Dog
{
     public:
     void display(Animal & t)
     {
          cout<<"Age is :"<<t.age<<endl;
          cout<<"Weight is :"<<t.weight<<endl;
     }
};
int main()
{
     Animal A;
     Dog D;
     D.display(A);
     return 0;
}