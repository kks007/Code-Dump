#include <iostream>
using namespace std;

class demo1{
    public:
    void func1(){
        func2();
    }
    virtual void func2()
    {
        cout << "Hello there" << endl;
    }
};

class demo2: public demo1{
    public:
    virtual void func2()
    {
        cout << "Hello world" << endl;
    }
};

int main()
{
    demo1 obj1;
    obj1.func1();
    demo2 obj2;
    obj2.func1();
    return 0;
}