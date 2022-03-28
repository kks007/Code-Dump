#include <bits/stdc++.h>

# define mod 1000000007
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int num_primes(int n)
{
    int cnt = 0;

    for (int i = 2; i <= n; i++)
        if (isprime(i))
            cnt++;
    return cnt;
}

int fact(int n)
{
    if (n <= 1)
        return 1;
    int fact_ = fact(n - 1);
    return ((long long)(n) * (long long)(fact_)) % mod;
}

int numPrimeArrangements(int n)
{
    int primes = num_primes(n);
    return ((long long)(fact(n - primes)) * (long long)(fact(primes))) % mod;
}
int main()
{
    cout << numPrimeArrangements(100) << endl;
}