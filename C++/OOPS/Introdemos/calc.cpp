#include <iostream>
#include <math.h>

using namespace std;

int calc(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3 = 0, choice;
    cout << "Enter num1" << endl;
    cin >> num1;
    cout << "Enter num2" << endl;
    cin >> num2;
    cout<< "********************" << endl << "********************" << endl;
    cout << "Make your choice: " << endl;
    cout<< "1. ADD" << endl;
    cout<< "2. Subtract" << endl;
    cout<< "3. Multiply " << endl;
    cout<< "4. Divide" << endl;
    cout<< "5. Power" << endl;
    cout<< "6. Log" << endl;
    cout<< "7. sin " << endl;
    cout<< "8. cos" << endl;
    cout<< "9. tan" << endl;
    cout<< "10. floor" << endl;
    cout<< "11. ceiling" << endl;
    cout<< "********************" << endl << "********************" << endl;

    calc(num1, num2, num3);
    return 0;
}

int calc(int num1, int num2, int num3)
{
    int choice = 0;
    cin >> choice;

    switch(choice)
    {
        case 1: 
        num3 = num1 + num2;
        cout << num3;
        break;

        case 2: 
        num3 = num1 - num2;
        cout << num3;
        break;

        case 3: 
        num3 = num1 * num2;
        cout << num3;
        break;

        case 4: 
        num3 = num1 / num2;
        cout << num3;
        break;

        case 5: 
        num3 = pow(num1, num2);
        cout << num3;
        break;

        case 6: 
        cout << log(num1) << endl << log(num2) << endl;
        break;

        case 7: 
        cout << sin(num1) << endl << sin(num2) << endl;
        break;

        case 8: 
        cout << cos(num1) << endl << cos(num2) << endl;
        break;

        case 9: 
        cout << tan(num1) << endl << tan(num2) << endl;
        break;

        case 10: 
        cout << floor(num1) << endl << floor(num2) << endl;
        break;

        case 11: 
        cout << ceil(num1) << endl << ceil(num2) << endl;
        break;
        
        default: cout << "Invalid Choice" << endl;  
    }
    return 0;
    
}


