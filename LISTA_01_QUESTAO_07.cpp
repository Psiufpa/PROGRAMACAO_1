/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath> // Biblioteca para usar sqrt()
using namespace std;
int main() 
{
    long cateto1, cateto2;
    long hipotenusa;
    
    // Entrada de dados
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;
    
    // Cálculo da hipotenusa
    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2, 2));
    cout << "A medida da hipotenusa é: " << hipotenusa << endl;
    
    return 0;
}