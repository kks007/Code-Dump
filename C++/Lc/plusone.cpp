#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(i >= 0){
            if(digits[i] == 9)
                digits[i] = 0;
            else{
                digits[i] +=1;
                return digits;
            }
            i--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }

int main(){
    vector<int> nums {1,2,3,4};
    plusOne(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<< nums[i] << " ";
    }
}