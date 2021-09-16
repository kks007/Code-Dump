#include <iostream>
#include <math.h>
using namespace std;

int logarithm (int num, int base);

int main()
{
    int num = 0; 
    int base = 0;

    cout << "Enter the no.: " << endl;
    cin >> num;
    cout << "Enter the base: " << endl;
    cin << base;
    logarithm(num, base);
    

}

int logarithm (int num, int base)
{
    int i = 0;
    double ans = 0;
    while (ans < num )
    {
        ans = pow(base, i);
        if (ans == num)
        {
            break;
        } i+= 1;

    }
    cout << i << endl;
    return 0;
}

