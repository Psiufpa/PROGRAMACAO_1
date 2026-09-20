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
    double salario;
    
    ifstream entrada("salario.txt");
    
    entrada >> salario;
    
    cout << salario * 1.25 << '\n';

    entrada.close();
    return 0;
}




