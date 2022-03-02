#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string s, string t){
    int flag = 0;

    for(int i = 0; i <t.length() && flag < s.length(); i++)
        if(s[flag] == t[i])
            flag++;
    return (flag == s.length());
}

int main(){

    string str1 = "abc";
    string str2 = "ahbgdc";
    cout<< isSubstring(str1, str2) << endl;

}