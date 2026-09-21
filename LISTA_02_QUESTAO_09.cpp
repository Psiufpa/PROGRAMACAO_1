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
    ifstream entrada("entrada.txt");
    ofstream saida("degraus.txt");

    double altura_cm, altura_m;
    int degraus;
    
    entrada >> altura_cm >> altura_m;
    
    degraus = ceil (altura_m * 100 / altura_cm);
    
    saida << degraus << endl;
    
    entrada.close();
    saida.close();

    return 0;
}




