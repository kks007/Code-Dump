#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

int main()
{
    int t, n;
    int flag1, flag2;

    int b[MAX];
    cin >> t;
    while(t--)
    {  
        cin >> n;
        for(int i = 0; i < n; i++)
        {   
            cin >> b[i];
        }

        sort(b, b+n);

        flag1 = 0;
        for(int j = 0; j < n; j++)
        {
            for(int k = 1; k < j; k++)
            {
                flag2 = b[k]* (n-k);
                if(flag2 > flag1){
                    flag1 = flag2;
                }
            }
        }
        cout<< flag1 << endl;
        
    }
}

