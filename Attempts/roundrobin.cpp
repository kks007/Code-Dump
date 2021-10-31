#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int points = (2*(n-k)) + (2*((k-1)/2)) ;
        cout << points << endl;
    }
}


