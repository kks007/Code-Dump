#include <bits/stdc++.h>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> mp;

    mp.insert(pair<char, int>('I', 1));
    mp.insert(pair<char, int>('V', 5));
    mp.insert(pair<char, int>('X', 10));

    for(auto pair: mp){
        cout << pair.first << " - " << pair.second << endl;
    }

}