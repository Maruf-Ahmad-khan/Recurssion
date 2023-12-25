#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> &arr, int& n, int i)
{
     if(i==n-1)
     {
          return true;
     }
     if(arr[i+1]<arr[i])
     
          return false;

     return checkSorted(arr, n, i+1);
     
}
int main()
{
     vector<int> arr{10,20,30,40,50};
     int n = arr.size();
     int i = 0;
     bool isSorted = checkSorted(arr, n, i);
     if(isSorted)
     {
          cout<<"Array is sorted"<<endl;
     } 
     else{
          cout<<"Array not sorted"<<endl;
     }
     return 0;
}