#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle)
{
    if (needle.size() == 0)
        return 0;
    else
        return haystack.find(needle);
}

int main()
{
    string a = "hello";
    string b = "llo";

    cout<< strStr(a, b);
}