#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()-1)
        {
            if(nums[i]==nums[i+1])
            return true;
            i++;
        }   
        return false;
}

int main()
{
    vector<int> nums {1,2,7,3};
    cout << containsDuplicate(nums);
}