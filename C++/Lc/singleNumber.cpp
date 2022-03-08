#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
    int n = 10;
    vector<int> check (n, 0);
    for(int i = 0; i < nums.size(); i++){
        int index = nums[i];
        check[index]++;
    }
    for(int i = 0; i< check.size(); i++){
        if(check[i] == 1){
            cout<< i;
        }
    }
    return 0;
}

int main(){
    vector<int> test {1,2,3,2,1};
    singleNumber(test);
}