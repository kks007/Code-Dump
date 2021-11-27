#include <iostream>
using namespace std;

class Demo{
    public:
    void greet(){
         cout << "Hello" << endl;
    }
    Demo(){
        cout << "object created" << endl;
    }
    ~Demo(){
        cout << "object destroyed" << endl;
    }
};

int main() {
    Demo obj;

    obj.greet();
    return 0;

}