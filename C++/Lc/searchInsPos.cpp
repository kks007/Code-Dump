#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target)
            return i;
        else if(nums[i] > target)
            return i;
    }
    return nums.size();
}


int main(){
    vector <int> digits {1,3,5,6};
    cout << searchInsert(digits, 2);
}