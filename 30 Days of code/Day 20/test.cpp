#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a;
    cout<<"Enter Test Cases: ";
    cin>>t;
    
    while(t--)
    {
        stack<int> s;
        int last;
        unsigned long long int num;
        cout<<"Enter number: ";
        cin>>num;
        
        while(num)
        {
            last = num%10;
            num /= 10;
            
            if(s.empty())
                 s.push(last);
            
            else if(s.top()!=last)
                 s.push(last);
        }
        
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
	}
	return 0;
}