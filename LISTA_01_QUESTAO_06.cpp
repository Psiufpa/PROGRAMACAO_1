/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main () 
{
    
    int a, b, c;
    
    cin >> a >> b;
    
    cout <<" Valor de a: " << a << endl;
    cout <<" Valor de b: " << b << endl;
    
    c = a;
    a = b;
    b = c;
    
    cout <<" Valor de a: " << a << endl;
    cout <<" Valor de b: " << b << endl;
    
    return 0;
}
