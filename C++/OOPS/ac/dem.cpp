#include <bits/stdc++.h>
using namespace std;

class Student{
    string name; 
public:

    int age;
    bool gender;

    Student(){
        cout<<"Default constructor"<<endl;
    } // default constructor

    Student(string s, int a, bool g){
        cout<<"Parametarised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    } // parametarized constructor

    Student(Student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } // copy constructor 
    // default copy constructor only copies valuse not location (shallow copy),
    // so when we need to deep copy something, we need to make our own copy constructor

    ~Student(){
        cout<<"Destructor called"<<endl;;
    } //destructor

    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age: ";
        cout<<age<<endl;
        cout<<"Gender: ";
        cout<<gender<<endl;
    }

    bool operator == (Student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        } else {
            return false;
        }
    }
};

int main(){
    
    // for(int i = 0; i<3; i++){
    //     string s;
    //     cout<<"Name: ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age: ";
    //     cin>>arr[i].age;
    //     cout<<"Gender: ";
    //     cin>>arr[i].gender;
    // }


    Student a("kaushal", 19, 0);

    a.printInfo();

    Student b;
    Student c = a; //copy constructor call

    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    return 0;
}

