#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr_points[n] = {3,2,3,1,2,3,0,1};

    int aPoint = 0, bPoint = 0;
    int turn = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){
        if(arr_points[i] > 1){
            sum = sum + arr_points[i];

        }
        else if(arr_points[i] == 0 && turn == 0){
            aPoint = aPoint + sum;
            sum = 0;
            turn = 1;
        }else if(arr_points[i] == 1 && turn == 0){
            sum = sum -1;
            aPoint = aPoint + sum;
            sum = 0;
            turn = 1;
        }else if(arr_points[i] == 0 && turn == 1){
            bPoint = bPoint + sum;
            sum = 0;
            turn = 0;
        }else if(arr_points[i] == 1 && turn == 1){
            sum = sum - 1;
            bPoint = bPoint + sum;
            sum = 0;
            turn = 0;
        }
    }

    if(aPoint > bPoint){
        cout << "A wins" << endl;

    } else if (bPoint > aPoint) {
        cout << "B wins" << endl;
    }else{
        cout << "tie" << endl;
    }
}