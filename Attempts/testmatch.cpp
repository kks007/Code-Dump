#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int india = 0, england = 0, draw = 0;

        vector<int> vec1;
        for (int i = 0; i < 5; i++)
        {
            int a;
            cin>> a;
            vec1.push_back(a);
        }
        for(int i = 0; i < vec1.size(); i++)
        {
            if(vec1[i] == 1)
            {
                india +=1;
            }
            else if (vec1[i] == 2){
                england +=1;
            }
            else{
                draw +=1;
            }
        }
        if(india > england)
        {
            cout << "India"<< endl;
        }
        else if(england > india)
        {
            cout << "England" << endl;
        }
        else{
            cout << "Draw" << endl;
        }
    }
}