#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i, count = 0;
    cout << "Enter the number to convert: ";
    cin >> n;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "No of ones:  = ";
    for (i = i - 1; i >= 0; i--)
    {
        
        if(a[i] == 1)
            count++;
    }

    cout<< count << endl;
}
