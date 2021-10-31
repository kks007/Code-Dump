#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        for (int i = 0; i < n-1; i++)
        {
            if(str[i] == 'L' && str[i+1] == 'L'){
                cout << "YES" << endl;
                goto out;
            }
            else if (str[i] == 'R' && str[i+1] == 'R'){
                cout << "Yes" << endl;
                goto out;
            }
        }
        cout << "NO" << endl;
        out:;
    }
}