#include <bits/stdc++.h>
using namespace std;

int peak(vector<int> nums){
    for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1])
                return i;
        }
        return nums.size() - 1;
}
int main()
{
    vector<int> nums {1,1,3,7,6,4};

    cout << peak(nums);
}