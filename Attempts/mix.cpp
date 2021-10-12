#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0, b = 0, t = 0;

    cin >> t;

    while (t != 0)
    {
        cin >> a >> b;

        if (a > 0 && b > 0)
        {
            cout<< "Solution" << endl;
        }
        else if (b == 0)
        {
            cout << "Solid" << endl;
        }
        else if (a == 0)
        {
            cout << "Liquid" << endl;
        }

        t = t-1;
    }
    
}