#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{

}
int main()
{
    vector <int> test {0,1,2,3,4,5};

    for(int i = 0; i< test.size(); i++){
        cout << test[i] << " ";
    }
    test.erase(3);
    for(int i = 0; i< test.size(); i++){
        cout << test[i] << " ";
    }
}