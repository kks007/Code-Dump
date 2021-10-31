#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t = 0, x = 0, k = 0;
    cin >> t;
    while(t--)
    {
        cin >> x >> k;
        long long int min = (x*2);
        long long int max = x*k* (x *k-1);
        cout << min << " " << max << endl;
    }
}
