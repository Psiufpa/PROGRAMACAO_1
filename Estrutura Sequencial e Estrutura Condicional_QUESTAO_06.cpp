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
    
    ifstream entrada("entrada06.txt");
    ofstream saida("saida06.txt");
    
    int min;
    int horas, minutos;
    
    entrada >> min;
    
    horas = min / 60;
    minutos = min % 60;
    
    saida << horas << endl << minutos << endl;
    
    entrada.close();
    saida.close();
    
    
    return 0;
}