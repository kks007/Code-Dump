#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int l = 0, r = 1;
    int profit, maxP = 0;

    while(r < prices.size()){
        if(prices[l] < prices[r])
        {
            profit = prices[r] - prices[l];
            maxP = max(maxP, profit);
        }
        else
        {
            l = r;
        }
        r += 1;
    }
    return maxP;
}

int main()
{
}