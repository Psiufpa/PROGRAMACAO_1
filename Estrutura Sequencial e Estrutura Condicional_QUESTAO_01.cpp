/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double valor;
    int quantidade;
    
    cout << "Entre com o Valor do Produto: ";
    cin >> valor;
    cout << "Entre com a quantidade comprada: ";
    cin >> quantidade;

    cout << fixed << setprecision(2) << "O valor total a pagar é: " << valor * quantidade << endl;
    
    return 0;
}