#include <bits/stdc++.h>
using namespace std;

int digSum(int n)
{
    int sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, e;
        cin >> b >> e;
        int an = pow(b, e);
        cout<< digSum(an)<<endl;
    }
}