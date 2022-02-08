#include <iostream>
using namespace std;

class Parent {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};


class Child: public Parent {
};


class GrandChild: public Child {
};

int main() {
  GrandChild myObj;
  myObj.myFunction();
  return 0;
}
