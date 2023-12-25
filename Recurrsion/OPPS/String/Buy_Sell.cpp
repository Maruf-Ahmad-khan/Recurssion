#include<bits/stdc++.h>
using namespace std;
void maxprofitfinder(vector<int>&prices, int i , int &minprice, int &maxprofit)
{
     // base case
     if(i == prices.size())
     return ;
     if(prices[i] < minprice)
     minprice = prices[i];
     int todaysprice = prices[i] - minprice;
     if(todaysprice > maxprofit)
     maxprofit = todaysprice;
     maxprofitfinder(prices, i + 1, minprice, maxprofit);
}
int maxprofit(vector<int>&prices)
{
     int minprice = INT_MAX;
     int maxprofit = INT_MIN;
     maxprofitfinder(prices, 0, minprice, maxprofit);
     return maxprofit;
}

int main()
{
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;
    vector<int> prices (n);
    for(int i = 0; i < prices.size(); i ++)
    {
     cin>>prices[i];
    }
    cout<<"The maxprofit is :"<<maxprofitfinder(prices)<<endl;
    return 0;
}