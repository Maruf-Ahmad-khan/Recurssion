#include<bits/stdc++.h>
using namespace std;
int maxprofit(vector<int>&prices)
{
     int maxprofit = 0;
     int minprice = prices[0];
     int n = prices.size();
     for(int i = 0; i < n; i ++)
     {
          if(prices[i] < minprice)
          {
               minprice = prices[i];
          }
          else if(prices[i] - minprice > 0)
          {
               maxprofit = maxprofit + prices[i] - minprice;
               minprice = prices[i];
          }
     }
     return maxprofit;
}

int main()
{
     int n;
     cout<<"Enter n :"<<endl;
     cin>>n;
     vector<int> prices;
     for(int i = 0; i < n; i ++)
     {
          cin>>prices[i];
     }
     cout<<"The maximum prices are :"<<maxprofit(prices)<<endl;
     return 0;
}