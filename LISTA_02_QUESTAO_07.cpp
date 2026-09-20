/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() 
{
    double grau_decimal;
    int grau, minuto, segundo;
    
    ofstream saida("coordenadas.txt");
    
    cin >> grau_decimal;
    
    grau = grau_decimal;
    minuto = (grau_decimal - grau) * 60;
    segundo = ((grau_decimal - grau) * 60 - minuto) * 60;
    
    saida << grau << "\n";
    saida << minuto << "\n";
    saida << segundo << "\n";

    saida.close();
    return 0;
}




