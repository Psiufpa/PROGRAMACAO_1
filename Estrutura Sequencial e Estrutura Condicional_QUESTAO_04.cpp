/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() 
{
    double valor;
    
    cout << "entre com o valor da compra: " ;
    cin >> valor;
    
    if (valor >=200.0) 
    {
        cout << "desconto de 10 %" << endl;
        cout << "o valor final é: " << valor * 0.9 << endl;
        
    }
    else
    {
        cout << "desconto de 0 %" << endl;
        cout << "o valor final é: " << valor << endl;
    }
    return 0;
}