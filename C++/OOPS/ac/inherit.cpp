#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void Afunc()
    {
        cout << "Func A\n";
    }
};

class B
{
public:
    void Bfunc()
    {
        cout << "Func B\n";
    }
};

class C : public A, public B
{
public:
};

int main()
{
    C objc;
    objc.Afunc();
    objc.Bfunc();
}