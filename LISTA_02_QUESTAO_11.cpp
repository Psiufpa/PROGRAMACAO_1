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
    ofstream saida("saida.txt");

    int numero;
    
    cin >> numero;
    
    saida << int(numero * 0.11) << "\n"; // O número de animais silvestres segundo os biólogos (11%)
    saida << int(numero * 0.11 * (1-0.27)) << "\n"; // A quantidade de animais silvestres idosos segundo os biólogos (27% menor)
    saida << int(numero * 0.11 * (1.0/3.0)) << "\n"; // O número de animais silvestres segundo os registros oficiais (1/3)
    saida << int(numero * 0.11 * (1-0.27) * (1.0/4.0)) << "\n"; // A quantidade de animais silvestres idosos segundo os registros oficiais (1/4)
    
    saida.close();

    return 0;
}




