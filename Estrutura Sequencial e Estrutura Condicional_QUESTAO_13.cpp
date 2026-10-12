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
    
    ifstream entrada("entrada14.txt");
    ofstream saida("saida14.txt");
    
    double salario, abatimento, imposto, desconto;
    int dependentes;
    
    entrada >> salario;
    entrada >> dependentes;
    
    if (dependentes >=2) 
        abatimento = dependentes * 100.00;
    else
        abatimento = 0.00;
    
    if (salario <= 2000)
        imposto = 0.00;
    else if (salario > 2000 and salario <= 3000)
        imposto = 0.075;
    else if (salario > 3000 and salario <= 4500)
        imposto = 0.15;
    else 
        imposto = 0.225;
    
    if (imposto >= abatimento)
        desconto = imposto - abatimento;
    else
        desconto = 0.00;
    
    
    saida << fixed << setprecision(2) << salario * imposto << endl;
    saida << fixed << setprecision(2) << salario - desconto << endl;
    
    
       
    
    entrada.close();
    saida.close();
    
    
    return 0;
}