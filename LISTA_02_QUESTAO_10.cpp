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

    int horas, minutos, segundos_total;
    
    cin >> horas;
    cin >> minutos;
    
    saida << horas * 60 << "\n";
    saida << horas * 60 + minutos << "\n";
    saida << (horas * 60 + minutos) * 60 << "\n";
    
    saida.close();

    return 0;
}




