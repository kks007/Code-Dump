#include <iostream>  
using namespace std;  

class secondary; 
class primary  
{  
    int x;  
    public:  
    void setdata(int i)  
    {  
        x=i;  
    }  
    friend void min(primary,secondary);
};  
class secondary 
{  
    int y;  
    public:  
    void setdata(int i)  
    {  
        y=i;  
    }  
    friend void min(primary,secondary);
};  
void min(primary a,secondary b)  
{  
    if(a.x<=b.y)  
    cout << a.x << endl;  
    else  
    cout << b.y << endl;  
}  
   int main()  
{  
   primary a;  
   secondary b;  
   a.setdata(10);  
   b.setdata(20);  
   min(a,b);  
   return 0;  
 }  