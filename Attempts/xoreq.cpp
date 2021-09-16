#include <bits/stdc++.h>
#define MOD 1000000007 

using namespace std;

int power(long long x, long long  y, long long p)
{
    int temp = 1;
    x = x % p;

    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1)
            temp = (temp * x) % p;
        
        y = y >> 1;
        x = (x*x) %p;
    }
    return temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = power(2, n-1, MOD);
        cout << ans << endl;
    }
    return 0;
}