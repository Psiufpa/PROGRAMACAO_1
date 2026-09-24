/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() 
{
    double temp;
    
    cout << "entre com o valor da temperatura: " ;
    cin >> temp;
    
    if (temp >=25.0)
        cout << "QUENTE" << endl ;
    else if (temp < 25.0 and temp >=15.0)
        cout << "AGRADÁVEL" << endl ;
    else
        cout << "FRIO" << endl ;
    
    
    return 0;
}