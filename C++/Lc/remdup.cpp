#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,1,2,2,3,3,4,4,4,5}, i;
  
    vector<int>::iterator ip;
  
    // Using std::unique
    ip = std::unique(v.begin(), v.end());
    // Now v becomes {1 3 10 1 3 7 8 * * * * *}
    // * means undefined
  
    // Resizing the vector so as to remove the undefined terms
    v.resize(std::distance(v.begin(), ip));
  
    // Displaying the vector after applying std::unique
    for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }
}