#include <iostream>

const float PI = 3.14;

using namespace std;

int main()
{
    int radius = 0;
    float area = 0;

    cout << "Enter the radius: " << endl;
    cin >> radius; 
    area = PI * radius * radius;
    cout << "Area = " << area << endl;

}

