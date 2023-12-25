#include <iostream>
#include <limits.h>
using namespace std;
void print(int arr[], int n, int i, int& maxi)
{
     // base case
     if (i >= n)
     {
          return;
     }
     if (arr[i] > maxi)
     {
          maxi = arr[i];
     }
     print(arr, n, i + 1, maxi);
}
void printmini(int arr[], int n, int i, int& mini)
{
     // base case
     if(i >= n)
     {
          return ;
     }
     mini = min(mini, arr[i]);
     printmini(arr, n, i+1, mini);
}
int main()
{
     int arr[] = {90, 40, 50, 80, 70};
     int n = 6;
     int i = 0;
     int maxi = INT_MIN;
     int mini = INT_MAX;
     print(arr, n, i, maxi);
     printmini(arr, n, i, mini);
     cout << "The maximum element is :" << maxi << endl;
     cout<<"The minimum element is :"<<mini<<endl;
}