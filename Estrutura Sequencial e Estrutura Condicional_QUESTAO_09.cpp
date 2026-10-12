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
    
    ifstream entrada("entrada09.txt");
    ofstream saida("saida09.txt");
    
    double valor, distancia, frete;
    
    entrada >> valor; 
    entrada >> distancia;
    
    if (valor >= 300.0)
    {    
        frete = distancia * 0.00;
        saida << fixed << setprecision(2) << frete << endl;
        saida << fixed << setprecision(2) << valor << endl;
    }
    else
    {
        if (distancia > 15)
        {
            frete = distancia * 35.00;
            saida << fixed << setprecision(2) << frete << endl;
            saida << fixed << setprecision(2) << valor + frete << endl;
        }
        else if (distancia > 5 and distancia <= 15)
        {
            frete = distancia * 20.00;
            saida << fixed << setprecision(2) << frete << endl;
            saida << fixed << setprecision(2) << valor + frete << endl;
        }
        else
        {
            frete = distancia * 12.00;
            saida << fixed << setprecision(2) << frete << endl;
            saida << fixed << setprecision(2) << valor + frete << endl;
        }    
    }
        
    
    
    entrada.close();
    saida.close();
    
    
    return 0;
}