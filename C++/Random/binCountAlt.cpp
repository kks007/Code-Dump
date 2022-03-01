#include <bits/stdc++.h>

using namespace std;

void print_vector(vector<int> &vect)
   {   for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }

int digbitcount(int n)
{
    int a[10], i, count = 0;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        
        if(a[i] == 1)
            count++;
    }
    return count;
}
vector<int> result(int n){
    vector<int> ans;
    for(int i = 0; i <= n; i++){
        ans.push_back(digbitcount(i));
    }
    return ans;
}
int main(){

    vector<int> ans;
    ans = result(5);

    print_vector(ans);
    
    
}

