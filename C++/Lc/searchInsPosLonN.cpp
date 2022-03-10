#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
int len = nums.size();
int start = 0;
int end = len-1;
int mid;
mid = start + (end - start)/2;

    while(start <= end){
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid] < target){
            start = mid + 1;
        }else
            end = mid - 1;
			
        mid = start + (end - start)/2;
    }
    
return start;
}

int main(){
    vector <int> digits {1,3,5,6};
    cout << searchInsert(digits, 2);
}