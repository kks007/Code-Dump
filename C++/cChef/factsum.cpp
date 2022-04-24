#include <bits/stdc++.h>
using namespace std;

int sumofoddFactors(int n);
int sumofEvenFactors(int n);

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        int diff = sumofoddFactors(n) - sumofEvenFactors(n);
        cout << abs(diff) << endl;
    }
}

int sumofoddFactors(int n)
{
    int res = 1;
    while (n % 2 == 0)
        n = n / 2;
 
    for (int i = 3; i <= sqrt(n); i++)
    {
        int count = 0, curr_sum = 1;
        int curr_term = 1;
        while (n % i == 0) {
            count++;
 
            n = n / i;
 
            curr_term *= i;
            curr_sum += curr_term;
        }
 
        res *= curr_sum;
    }
 
    if (n >= 2)
        res *= (1 + n);
 
    return res;
}

int sumofEvenFactors(int n)
{
    if (n % 2 != 0)
       return 0;
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++) {

        int count = 0, curr_sum = 1, curr_term = 1;
        while (n % i == 0) {
            count++;
 
            n = n / i;
            if (i == 2 && count == 1)
                curr_sum = 0;
            curr_term *= i;
            curr_sum += curr_term;
        }
        res *= curr_sum;
    }
    if (n >= 2)
        res *= (1 + n);
 
    return res;
}