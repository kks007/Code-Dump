#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,1,2,3,3,4,4,4,4,4,5};
  
    vector<int>::iterator ip;
  
    int count;
    sort(nums.begin(), nums.end());
  
    count = std::distance(nums.begin(),
                          std::unique(nums.begin(), nums.end()));
    return count;
}