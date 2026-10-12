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
    
    int ano;
    
    cin >> ano;
    
    if ((ano % 4 == 0) and (ano % 100 != 0))
        cout << "o ano " << ano << " é bissexto" << endl;
    else
        cout << "o ano " << ano << " não é bissexto" << endl;
    
    
    return 0;
}
