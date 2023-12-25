#include<bits/stdc++.h>
using namespace std;
int robHouse(vector<int>& nums, int i, int member[])
{
     if(i >= nums.size())
     return 0;
     if(member[i] != - 1)
     return member[i];
     int first = nums[i] + robHouse(nums, i + 2, member);
     int second = robHouse(nums, i + 1, member);
     return member[i];
}

int rob(vector<int>& nums)
{
     int member[101];
     memset(member, -1, 101 * sizeof(int));
     robHouse(nums, 0, member);
}

