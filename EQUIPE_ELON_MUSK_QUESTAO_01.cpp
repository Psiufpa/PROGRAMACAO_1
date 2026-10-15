/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// EQUIPE ELON MUSK

// QUESTAO 01

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int valor, resto;
    int valor_100, valor_50, valor_20, valor_10, valor_5, valor_2;
    
    cin >> valor;
    
    resto = valor % 100;
    valor_100 = valor / 100;
    valor = resto;
    
    resto = valor % 50;
    valor_50 = valor / 50;
    valor = resto;
    
    resto = valor % 20;
    valor_20 = valor / 20;
    valor = resto;
    
    resto = valor % 10;
    valor_10 = valor / 10;
    valor = resto;
    
    resto = valor % 5;
    valor_5 = valor / 5;
    valor = resto;
    
    resto = valor % 2;
    valor_2 = valor / 2;
    valor = resto;
    
    if (resto == 0)
    {
        cout << "100: " << valor_100 << endl;
        cout << "50: " << valor_50 << endl;
        cout << "20: " << valor_20 << endl;
        
        cout << "10: " << valor_10 << endl;
        cout << "5: " << valor_5 << endl;
        cout << "2: " << valor_2 << endl;
    }
    else 
        cout << "IMPOSSÍVEL" << endl;
    
    return 0;
}