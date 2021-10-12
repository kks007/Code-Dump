#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0, a = 0, b = 0, c = 0, d = 0;
     
     cin >> t;
     while (t != 0)
     {
         cin >> a >> b >> c >> d;

         if (a+b+c <= d)
         {
             cout << 1 << endl;
         }
         else if (a + b <= d)
         {
             cout << 2 << endl;
         }
         else
         {
             cout << 3 << endl;
         }

         t = t - 1;
     }

}