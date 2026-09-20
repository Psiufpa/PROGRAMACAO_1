/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() 
{
    float pesoSacoKg;
    float racaoPorGatoGramas;
    float pesoSacoGramas;
    float racaoTotalConsumida;
    float racaoRestante;
    // Entrada de dados
    cout << "Digite o peso do saco de ração (em kg): ";
    cin >> pesoSacoKg;
    cout << "Digite a quantia de ração dada para cada gato em gramas: ";
    cin >> racaoPorGatoGramas;
    // Conversão de quilos para gramas
    pesoSacoGramas = pesoSacoKg * 1000;
    // Cálculo da ração consumida em 5 dias por dois gatos
    racaoTotalConsumida = racaoPorGatoGramas * 2 * 5;
    // Cálculo da ração restante
    racaoRestante = pesoSacoGramas - racaoTotalConsumida;
    // Saída
    cout << "Após 5 dias, restará " << racaoRestante << " g de ração." << endl;
    return 0;
}
