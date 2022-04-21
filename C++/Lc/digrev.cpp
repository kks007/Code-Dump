#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{
    long long int remainder, reverse = 0;
    while (x != 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }
    if (reverse < -2147483648 || reverse > 2147483648)
        return 0;
    return reverse;
}

int main()
{
}