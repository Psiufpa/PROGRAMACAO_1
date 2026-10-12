/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    
    double num1, num2;
    int op;
    
    cin >> num1;
    cin >> num2;
    cin >> op;
    
    switch (op)
    {
        case (1):
            cout << num1 + num2 << endl;
            break;
        case (2):
            cout << num1 - num2 << endl;
            break;
        case (3):
            cout << num1 * num2 << endl;
            break;
        case (4):
            
            if (num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout << "Não é possível dividir por 0." << endl;
            break;
        default:
            cout << "Operação inválida." << endl;
        
    }
    
    
    
    return 0;
}