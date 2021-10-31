#include<iostream>
using namespace std;

class First {
public:

   void add(int x, int y) {
       cout << "Sum in first:" << x + y;
   }
};

class Second : public First {
public:

   void add(int x, int y) {
       cout << "Sum in second:" << x + y;
   }
};

int main() {

   Second obj;
   obj.add(10, 20);
   cout << endl;
   First obj2;
   obj2.add(34,56);

   return 0;
}