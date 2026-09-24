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
    
    ifstream entrada("entrada07.txt");
    ofstream saida("saida07.txt");
    
    int valor;
    
    entrada >> valor;
    
    if (valor > 0)
        saida << "positivo" << endl;
    else if (valor ==0)
        saida << "zero" << endl;
    else
        saida << "negativo" << endl;
    
    entrada.close();
    saida.close();
    
    
    return 0;
}