#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec;

    for (int i = 1; i <= 5; i++)
        vec.push_back(i);

    cout << "Size of the vector is: " << vec.size() << endl;

    cout << "The elements of the vector are: " << endl;
    for(int i=0; i < vec.size(); i++)
      cout << vec.at(i) << ' ';
    
    return 0;
}
