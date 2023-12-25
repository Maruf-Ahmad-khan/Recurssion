#include<iostream>
using namespace std;
class cuboid{
int length, breadth, height;
public:

    void Volume(int l, int b, int h)
    {
     length = l;
     breadth = b;
     height = h;
     int volume = length * breadth * height;
     cout<<"The volume of cuboid is :"<<volume<<endl;
    }
};

int main()
{
     cuboid C;
     C.Volume(10,20,30);
     return 0;
}