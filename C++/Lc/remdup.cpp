#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,1,2,2,3,3,4,4,4,5}, i;
  
    vector<int>::iterator ip;

    ip = std::unique(v.begin(), v.end());

    v.resize(std::distance(v.begin(), ip));
  
    for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }
}