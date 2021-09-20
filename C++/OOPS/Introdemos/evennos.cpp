#include <iostream>

using namespace std;

int main()
{
    int num;
	
	cout << "\nenter Number";
	cin >> num;
	
	cout<< "\nList of Even Numbers "<<num<<"are\n"; 
	for(int i=1; i<=num; i++)
  	{
  		if(i%2 == 0 )
  		{
  			cout<<i<<" ";
		}	
  	}
		
 	return 0;
}
