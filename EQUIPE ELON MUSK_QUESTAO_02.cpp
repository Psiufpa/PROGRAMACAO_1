/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// EQUIPE ELON MUSK
// QUESTÃO 02

#include <iostream>

using namespace std;

int main()
{
    int n, reverso = 0, soma = 0, qtd = 0;

    cin >> n;
    
    while (n != 0)
    {
        int digito = n % 10;
        n = n / 10;
        if (digito % 2 == 0)
        {    
            soma = soma + digito;
            qtd = qtd + 1;
    
            
        }
    }
    cout << "Quantidade Pares: " << qtd << endl;
    cout << "Soma Pares: " << soma << endl;
    
    
    return 0;
}