/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() 
{
    int dividendo, divisor;
    
    cin >> dividendo;
    cin >> divisor;
    
    if (divisor == 0)
        cout << "erro" << endl;
    else 
    {
        cout << dividendo / divisor << endl;
        cout << dividendo % divisor << endl;
    }
    
    return 0;
}