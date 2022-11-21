#include <bits/stdc++.h>
using namespace std;


class Car{
public:
    int mileage;
    int cost;

    int sum(int n, int m){
        return n+m;
    }

    int sum(int n, int m, int o){
        return n+m+o;
    }

    Car(int x, int y){
        mileage = x;
        cost = y; 

    }
    ~Car(){
        cout << "object destroyed" << endl;
    }

};

int main(){

    Car ford(033702, 45);
    cout << "sdlfflssd" << endl;
    cout << "sfsldfsd " << endl;

}