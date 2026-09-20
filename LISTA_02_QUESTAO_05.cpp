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
    double custo, preco;
    int convites;

    ifstream entrada("teatro.txt");
    ofstream saida("convite.txt");

    entrada >> custo >> preco;
    
    convites = ceil(custo / preco);

    cout << "Quantidade de convites: " << convites << '\n';

    saida << convites << '\n';

    entrada.close();
    saida.close();

    return 0;
}




