#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string str)
{
    bool x = true;
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (!isalnum(str[i]))
            i++;
        else if (!isalnum(str[j]))
            j--;
        else
        {
            if (tolower(str[i++]) != tolower(str[j--]))
            {
                x = false;
                break;
            }
        }
    }
    return x;
}

int main()
{
   cout<< isPalindrome("helllleh");
}