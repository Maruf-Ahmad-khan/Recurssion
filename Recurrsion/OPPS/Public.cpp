// write a program to print the age and weight of an animal
#include<iostream>
using namespace std;
class Animal{
public:
int age , weight;

Animal()
{
     age = 25;
     weight = 70;
}

void display()
{
     cout<<"The age of animal is :"<<age<<endl;
     cout<<"The weight of animal is :"<<weight<<endl;
}
};

int main()
{
     Animal A;
     cout<<"The age is :"<<A.age<<endl;
     cout<<"The weight is :"<<A.weight<<endl;
     A.display();
     return 0;
}