#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    virtual void print(){
        cout<< "Base class' print function" << endl;
    }
    void display(){
        cout << "this is the base class' display func" << endl;
    }
};

class Derived : public Base {
public:
    void print(){
        cout<< "Derived class' print function" << endl;
    }
    void display(){
        cout << "this is the derived class' display func" << endl;
    }

};

int main(){
    Base *basepointer;
    Derived d;
    basepointer = &d;

    basepointer -> print();
    basepointer -> display();

    return 0;
}