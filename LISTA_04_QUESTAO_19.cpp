/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// LISTA 04, QUESTAO 19

#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout << "insira o numero de entradas:" ;
    cin >> num;
    
    int i;
    float numero, menor, maior;
    
    menor = 1000000;
    maior = 0;
    
    for (i = 0; i < num; i++)
    {
        cin >> numero;
        if (numero >= maior)
            maior = numero;
        if (numero <= menor)
            menor = numero;
            
    }
    
    cout << endl;
    cout << menor << endl;
    cout << maior << endl;
    
}