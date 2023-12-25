#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target)
{
     int left = 0;
     int right = n - 1;
     int mid = left + (right - left) / 2;
     while (left <= right)
     {
          if (arr[mid] == target)
          {
               return mid;
          }
          // Search in left part
          else if (arr[mid] > target)
          {
               right = mid - 1;
          }
          else
          // search in right part
          {
               left = mid + 1;
          }
          mid = left + (right - left) / 2;
     }
     return -1;
}
int main()
{
     int arr[] = {2, 4, 5, 6, 7, 8};
     int n = 6;
     int target = 5;
     int indexFound = BinarySearch(arr, n, target);
     if (indexFound == -1)
     {
          cout << "Target not found : " << endl;
     }
     else
     {
          cout << "Target found :" << indexFound << endl;
     }
     return 0;
}