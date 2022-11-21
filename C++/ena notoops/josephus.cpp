#include <bits/stdc++.h>
using namespace std;

int josephus();

void main()
{
    int n = 0, k = 0;

    cout << "Enter N:" << endl;
    cin >> n;
    cout << "Enter K: " << endl;
    cin >> k;
    cout <<  josephus(n,k) << endl;
}

int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return(josephus(n -1 , k) + k - 1) % n + 1;
}

