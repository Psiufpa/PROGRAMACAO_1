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
    
    ifstream entrada("entrada08.txt");
    ofstream saida("saida08.txt");
    
    double salario, percentual;
    
    entrada >> salario; 
    entrada >> percentual;
    
    if (salario < 2000.0)
    {    
        
        saida << fixed << setprecision(2) << salario * percentual / 100.0 << endl;
        saida << fixed << setprecision(2) << 150.00 << endl;
        saida << fixed << setprecision(2) << salario * (1+percentual/100.0) + 150.00 << endl;
        
    }
    else
    {    
        saida << fixed << setprecision(2) << salario * percentual / 100.0 << endl;
        saida << fixed << setprecision(2) << 0.00 << endl;
        saida << fixed << setprecision(2) << salario * (1+percentual/100.0) << endl;
    }
    
    entrada.close();
    saida.close();
    
    
    return 0;
}