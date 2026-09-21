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
    ifstream entrada("venda.txt");
    ofstream saida("cliente.txt");

    double VL_vista;
    int n_prestacoes;

    entrada >> VL_vista >> n_prestacoes;

    double total_antigo = ceil(VL_vista * 1.1 * 100) / 100;
    double prestacao_antiga = ceil(total_antigo / n_prestacoes * 100) / 100;
    double prestacao_atualizada = ceil(prestacao_antiga * 0.9 * 100) / 100;
    double total_atualizado = ceil(prestacao_atualizada * n_prestacoes * 100) / 100;

    saida << fixed << setprecision(2);
    saida << total_antigo << "\n";
    saida << prestacao_antiga << "\n";
    saida << prestacao_atualizada << "\n";
    saida << total_atualizado << "\n";

    entrada.close();
    saida.close();

    return 0;
}




