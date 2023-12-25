// write a program to print the area of a rectangle
#include<iostream>
using namespace std;
class Rectangle{
     public:
     int length, breadth, area;

     Rectangle()
     {
          length = 23;
          breadth = 45;
          area = length * breadth;
     }
     void display()
     {
          cout<<"The given length is :"<<length<<endl;
          cout<<"The given breadth is :"<<breadth<<endl;
          cout<<"The calculated area is :"<<area<<endl;
     }
};

int main()
{
     Rectangle R;
     R.display();
     return 0;
}