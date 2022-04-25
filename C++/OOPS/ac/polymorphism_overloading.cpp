#include <bits/stdc++.h>
using namespace std;

class demo
{
public:
    void func(){
        cout << "func with no args" << endl;
    }

    void func(int x){
        cout << "func with int arg"<< endl;;
    }
    void func(double x){
        cout << "func with double arg"<< endl;
    }
};

class Complex{
private:
    int real, imag;
public:
    Complex(){}
    Complex(int r, int i){
        real = r;
        imag = i;
    }

    Complex operator + (Complex const &obj){
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display(){
        cout<< real << " + i" << imag << endl;
    }
};

int main()
{
    // demo d;
    // d.func();
    // d.func(2);
    // d.func(3.4);

    Complex c1(12, 7), c2(6, 7);
    Complex c3 = c1+ c2;
    c3.display();

    return 0;
}
