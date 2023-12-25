#include <iostream>
#include <vector>
using namespace std;
// use pass by reference because it takes less mb and less time in memory for execution
int Binarysearch(vector<int>& arr, int& start, int& end, int& key)
{
     if (start > end)
          return -1;
     int mid = (start + end )/ 2;
     if (arr[mid] == key)
          return mid;

     if (arr[mid] < key)
     {
          start = mid + 1;
          return Binarysearch(arr, start, end, key);
     }
     else
     {
          end = mid - 1;
          return Binarysearch(arr, start, end, key);
     }
}
int main()
{
     vector<int> arr{10, 20, 30, 40, 50};
     int start = 0;
     int end = arr.size()-1;
     int key = 40;
     int ans = Binarysearch(arr, start, end, key);
     cout << "The key is : " << ans << endl;
     return 0;
}
