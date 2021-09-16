#include <iostream>
using namespace std;

int compare(int a, int b);

int main()
{
    int a = 0, b = 0;
    cout << "Enter the no.s you want to compare: ";
    cin >> a >> b;
    compare(a, b);

}

int compare( int a , int b)
{
    if (a > b)
    { cout << a;}
    else if (b > a)
    {cout << b;}
    else
    {
        cout << "Both are equal";
        return 0;
    }
}

