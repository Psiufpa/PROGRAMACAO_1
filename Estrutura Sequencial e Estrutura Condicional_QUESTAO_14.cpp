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
    
    ifstream entrada("entrada15.txt");
    ofstream saida("saida15.txt");
    
    double a, b, c, x;
    string angulo, medida;
    
    entrada >> a;
    entrada >> b;
    entrada >> c;
    
    if ((a+b > c) and (a+c > b) and (c+b > a))
    {
        x = a;
        if (a < b) 
        {
            a = b;
            b = x;
            
        }
        
        x = a;
        if (a < c)
        {
            a = c;
            c = x;
           
        }
        
        x = b;
        if (b < c)
        {
            b = c;
            c = x;
        }
        
        if (pow(a,2) == pow(b,2)+pow(c,2))
            angulo = "Retângulo";
        else if (pow(a,2) < pow(b,2)+pow(c,2))
            angulo = "Acutângulo";
        else
            angulo = "Obtusângulo";
        
        if (a == b and a == c and b == c)
            medida = "Equilátero";
        else if (a !=b and a!=c and b!=c)
            medida = "Escaleno";
        else
            medida = "Isósceles";
            
        saida << "É um triângulo" << endl;
        saida << medida << endl;
        saida << angulo << endl;
        
        
    }
    
    else
        saida << "Não forma um triângulo" << endl;
    
    entrada.close();
    saida.close();
    
    
    return 0;
}