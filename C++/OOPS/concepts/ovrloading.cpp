#include <iostream>    
using namespace std; 

class Cal 
{    
    public:    
int add(int a,int b){      
        return a + b;      
    }      
int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }
int add(int a, int b, int c, int d)      
    {      
        return a + b + c + d;      
    }            

};     

int main(void) {    
    Cal C;                                                     
    cout<<C.add(10, 20)<<endl;      
    cout<<C.add(12, 20, 23) << endl;
    cout<<C.add(12, 20, 23, 56) << endl;          
    return 0;    
}  
