#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int wordLen = 0, len = s.size();
    bool flag = false;
    for (int i = len - 1; i >= 0; --i)
    {
        if (s[i] != ' ')
        {
            flag = true;
            wordLen++;
        }
        else
        {
            if (flag == true)
                break;
            continue;
        }
    }
    return wordLen;
}
int main()
{
    string s = "This is the last word ";
    cout << lengthOfLastWord(s);
}