#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    string output="";
       if(strs.size()==0)
               return output;
    for(int i=0;i<strs[0].size();i++)
    {
       
        for(int j=1;j<strs.size();j++)
        {
            if(strs[0][i]!= strs[j][i])
            {
                return output;
            }
        }
       output.push_back(strs[0][i]);
    }
    return output;
}


int main(){
    vector <string> strs  {"hello", "hell", "heyy"};

    cout << longestCommonPrefix(strs);

}