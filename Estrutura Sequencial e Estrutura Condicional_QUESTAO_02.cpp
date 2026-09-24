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
    double nota1, nota2, media;
    
    
    cout << "Entre com a nota 1: ";
    cin >> nota1;
    cout << endl;
    cout << "Entre com a nota 2: ";
    cin >> nota2;
    cout << endl;
    media = (nota1 + nota2) / 2.0;
    
    cout << fixed << setprecision(2) << "a média das notas é: " << media << endl;
    
    if (media >=7.0)
        cout << "a situação do aluno é: APROVADO" << endl;
    else
        cout << "a situação do aluno é: REPROVADO" << endl;
    
    return 0;
}