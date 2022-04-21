#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
        string out = "";
        
        while (num >= 1000) {
            out += 'M';
            num -= 1000;
        }
        
        while (num >= 900) {
            out += "CM";
            num -= 900;
        }
        
        while (num >= 500) {
            out += 'D';
            num -= 500;
        }
        
        while (num >= 400) {
            out += "CD";
            num -= 400;
        }
        
        while (num >= 100) {
            out += 'C';
            num -= 100;
        }
        
        while (num >= 90) {
            out += "XC";
            num -= 90;
        }
        
        while (num >= 50) {
            out += 'L';
            num -= 50;
        }
        
        while (num >= 40) {
            out += "XL";
            num -= 40;
        }
        
        while (num >= 10) {
            out += 'X';
            num -= 10;
        }        
        
        while (num >= 9) {
            out += "IX";
            num -= 9;
        }
        
        while (num >= 5) {
            out += 'V';
            num -= 5;
        } 
        
        while (num / 4) {
            out += "IV";
            num -= 4;
        }
        
        while (num) {
            out += 'I';
            num--;
        }
        
        return out;
}

int main(){
    
}