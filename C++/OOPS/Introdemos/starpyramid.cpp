#include <iostream>
using namespace std;


void pypart(int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

void numpat(int n)
{
    int num = 1;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << num << " ";
 
        num = num + 1;

        cout << endl;
    }
}

void numpattwo(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void centeredpyramid (int n)
{
    int k = 2 * n - 2;
 
    for (int i = 0; i < n; i++) {
 
        for (int j = 0; j < k; j++)
        {
            cout << " ";  
        }
        k = k - 1;
        for (int j = 0; j <= i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
	int n = 5;
	pypart(n);
    cout << endl;
    numpat(n);
    cout << endl;
    numpattwo(n);
    cout << endl;
    centeredpyramid(5);
    cout << endl;

	return 0;
}




