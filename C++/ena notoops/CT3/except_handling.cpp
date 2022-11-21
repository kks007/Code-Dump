#include <bits/stdc++.h>

using namespace std;

int main(){
    int numerator, denominator, result;
    cout << "Enter values: " << endl;
    cin >> numerator >> denominator;

    try
    {
        if(denominator == 0)
        {
            throw denominator;
        }
        result = numerator/denominator;
    }

    catch(int exception)
    {
        cout << "You can't divide by 0" << exception;
    }

    cout << "Ans: " << result << endl;

    return 0;
}