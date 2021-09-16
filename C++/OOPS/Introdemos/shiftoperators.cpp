#include<iostream>

using namespace std;

int main() {
   int a = 0, b = 0;

   cout << "Enter number to left shift: \n";
   cin >> a;
   cout << "Shift by? : \n";
   cin >> b;
   a = a << b;
   cout << a << endl;
   
   
   cout << "Enter number to right shift: \n";
   cin >> a;
   cout << "Shift by? : \n";
   cin >> b;
   a = a >> b;
   cout << a << endl;
   return 0;
}

